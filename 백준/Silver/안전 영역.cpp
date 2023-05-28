#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 101
int MAP[MAX][MAX];
bool visit[MAX][MAX];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int N;

void BFS(int x,int y, int Level)
{
	visit[x][y] = true;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (MAP[nx][ny] <= Level || visit[nx][ny]) continue;

			visit[nx][ny] = true;
			q.push(make_pair(nx, ny));
		} 
	}
}

void Input()
{
	int A ,result = 1, MAX_L = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> A;
			MAP[i][j] = A;
			if (MAX_L < A) MAX_L = A;
		}
	}
	for (int k = 0; k <= MAX_L; k++)
	{
		int count = 0;
		memset(visit, false, sizeof(visit));
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (MAP[i][j] > k && !visit[i][j])
				{
					BFS(i, j, k);
					count++;
				}
			}
		}
		result = max(result, count);
	}
	cout << result;
}
void Answer()
{
	Input();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}