#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>

#define endl "\n"

using namespace std;

#define MAX 8
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,-1,1 };
int answer = 0;
int N, M;

void BFS(vector<vector<int>>& visit)
{
	queue<pair<int, int>>q;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (visit[i][j] == 2)
			{
				q.push({ i,j });
			}
		}
	}
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nextX = x + dx[i];
			int nextY = y + dy[i];

			if (nextX < 0 || nextY < 0 || nextX >= N || nextY >= M) continue;
			if (visit[nextX][nextY] == 0)
			{
				q.push({ nextX , nextY });
				visit[nextX][nextY] = 2;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (visit[i][j] == 0)
			{
				count++;
			}
		}
	}
	answer = max(answer, count);
}
void DFS(vector<vector<int>> visit , int x ,int y , int count)
{
	visit[x][y] = 1;

	if (count == 0)
	{
		BFS(visit);
		return;
	}

	for (int i = x; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (visit[i][j] == 0)
				DFS(visit, i, j, count - 1);
		}
	}
}

void Answer()
{
	cin >> N >> M;
	vector<vector<int>> visit(N, vector<int>(M));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> visit[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (visit[i][j] == 0)
				DFS(visit, i, j, 2);
		}
	}
	cout << answer << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}