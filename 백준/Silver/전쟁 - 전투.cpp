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

#define endl "\n"
using LL = long long;
using namespace std;

char war[101][101];
int dxy[][2] = { {-1,0},{1,0},{0,-1},{0,1} };
bool visit[101][101];
int M, N;

int BFS(int x, int y)
{
	visit[x][y] = true;
	char temp = war[x][y];
	queue<pair<int, int>>q;
	q.push({ x,y });
	int result = 0;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		result++;
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (visit[nx][ny]) continue;
			if (war[nx][ny] == temp)
			{
				visit[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
	return result;
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> war[i][j];
		}
	}
	int W = 0, B = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visit[i][j])
			{
				if (war[i][j] == 'W')
				{
					int temp = BFS(i, j);
					W += (temp * temp);
				}
				else
				{
					int temp = BFS(i, j);
					B += (temp * temp);
				}
			}
		}
	}
	cout << W << " " << B;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}