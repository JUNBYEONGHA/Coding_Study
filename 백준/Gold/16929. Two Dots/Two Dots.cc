#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

bool visit[51][51];
char dots[51][51];
int dxy[][2] = { {0,1} , {0,-1} , {1,0} , {-1,0} };
int sx, sy , n , m;

void DFS(int x, int y, int cnt)
{
	visit[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dxy[i][0];
		int ny = y + dxy[i][1];
		if (nx >= 0 && ny >= 0 && nx < n && ny < m
			&& dots[x][y] == dots[nx][ny] && !visit[nx][ny])
		{
			DFS(nx, ny, cnt + 1);
		}
		else if (nx == sx && ny == sy && cnt >= 4)
		{
			cout << "Yes";
			exit(0);
		}
	}
	visit[x][y] = false;
}

void Answer()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> dots[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visit[i][j])
			{
				sx = i, sy = j;
				DFS(i, j, 1);
				visit[i][j] = true;
			}
		}
	}
	cout << "No";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}