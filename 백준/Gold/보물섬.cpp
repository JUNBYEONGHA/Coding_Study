#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;


char treasure[51][51];
int visit[51][51];
int dxy[][2] = { {0,1 },{0,-1},{1,0},{-1,0} };
int L, W;

int BFS(int x, int y)
{
	queue<pair<int, int>> q;
	visit[x][y] = 0;
	q.push({ x,y });
	int result = 0;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];
			if (nx < 0 || ny < 0 || nx >= L || ny >= W) continue;
			if (visit[nx][ny] != -1 || treasure[nx][ny] == 'W') continue;
			visit[nx][ny] = visit[x][y] + 1;
			result = max(result, visit[nx][ny]);
			q.push({ nx,ny });
		}
	}
	return result;
}

void Answer()
{
	cin >> L >> W;
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> treasure[i][j];
		}
	}
	int result = 0;
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (treasure[i][j] == 'L')
			{
				fill(&visit[0][0], &visit[50][50], -1);
				result = max(result, BFS(i,j));
			}
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}