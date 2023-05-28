#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 101
int N, M;
int MAZE[MAX][MAX] , dist[MAX][MAX];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
 
void BFS()
{
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	dist[0][0] = 0;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (MAZE[nx][ny] == 1)
			{
				if (dist[nx][ny] > dist[x][y] + 1)
				{
					dist[nx][ny] = dist[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
			else if (MAZE[nx][ny] == 0)
			{
				if (dist[nx][ny] > dist[x][y])
				{
					dist[nx][ny] = dist[x][y];
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

void Answer()
{
	cin >> N >> M;
	char a;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> a;
			MAZE[i][j] = a - '0';
			dist[i][j] = 100000;
		}
	}
	BFS();
	cout << dist[M - 1][N - 1];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}