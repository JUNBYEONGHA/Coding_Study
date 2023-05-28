#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

int N, M, cameracnt = 0, minblindspot = 100;
int cameramap[10][10];
int dxy[][2] = { {0,1},{-1,0},{0,-1},{1,0} };
vector<pair<int, int>> camerapos;

void watch(int x, int y, int dir)
{
	dir %= 4;
	while (true)
	{
		x += dxy[dir][0];
		y += dxy[dir][1];
		if (x < 0 || y < 0 || x >= N || y >= M) return;;
		if (cameramap[x][y] == 6) return;
		if (cameramap[x][y] != 0) continue;
		cameramap[x][y] = 7;
	}
}
void cctvrun(int index)
{
	if (index == cameracnt)
	{
		int temp = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (cameramap[i][j] == 0) temp++;
			}
		}
		minblindspot = min(minblindspot, temp);
		return;
	}
	int x = camerapos[index].first;
	int y = camerapos[index].second;
	int backup[10][10] = { 0, };
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				backup[i][j] = cameramap[i][j];
			}
		}
		if (cameramap[x][y] == 1)
		{
			watch(x, y, i);
		}else if (cameramap[x][y] == 2)
		{
			watch(x, y, i);
			watch(x, y, i + 2);
		}else if (cameramap[x][y] == 3)
		{
			watch(x, y, i);
			watch(x, y, i + 1);
		}else if (cameramap[x][y] == 4)
		{
			watch(x, y, i);
			watch(x, y, i + 1);
			watch(x, y, i + 2);
		}else if (cameramap[x][y] == 5)
		{
			watch(x, y, i);
			watch(x, y, i + 1);
			watch(x, y, i + 2);
			watch(x, y, i + 3);
		}
		cctvrun(index + 1);
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cameramap[i][j] = backup[i][j];
			}
		}
	}
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> cameramap[i][j];
			if (cameramap[i][j] >= 1 && cameramap[i][j] <= 5) camerapos.push_back({ i,j });
		}
	}
	cameracnt = camerapos.size();
	cctvrun(0);
	cout << minblindspot;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}