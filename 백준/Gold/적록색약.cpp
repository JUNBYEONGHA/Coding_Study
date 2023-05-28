#include<iostream>
#include<cstring>
#include<queue>
#define endl "\n"
using namespace std;

char sector[101][101];
bool visit[101][101];
int result = 0 , N;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int x, int y )
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	visit[x][y] = true;
	char temp = sector[x][y];
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (temp == sector[nx][ny] && !visit[nx][ny])
			{
				visit[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
	result++;
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> sector[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visit[i][j])
			{
				BFS(i,j);
			}
		}
	}
	cout << result << " ";
	result = 0;
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (sector[i][j] == 'G')
			{
				sector[i][j] = 'R';
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visit[i][j])
			{
				BFS(i, j);
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