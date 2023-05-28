#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 310
int MAP[MAX][MAX];
bool visit[MAX][MAX];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int N, M;

int BFS(int x,int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visit[x][y] = true;

	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		
		q.pop();
		int count = 0;
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)continue;
			if (MAP[nx][ny] == 0 && !visit[nx][ny])	count++;
			else if (MAP[nx][ny] > 0 && !visit[nx][ny])
			{
				q.push(make_pair(nx, ny));
				visit[nx][ny] = true;
			}
		}

		if (count > 0)
		{
			MAP[x][y] -= count;
			if (MAP[x][y] < 0) MAP[x][y] = 0;
		}
	}
	return 1;
}

void Input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> MAP[i][j];
		}
	}
}
void Solution()
{
	int count = 0 , day = 0;
	while (true)
	{
		count = 0;
		memset(visit, false, sizeof(visit));
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (MAP[i][j] > 0 && !visit[i][j])
				{
					count += BFS(i, j);
				}
			}
		}
		if (count >= 2) break;
		else if (count == 0) break;
		day++;
	}
	if (count == 0) day = 0;
	cout << day << endl;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}