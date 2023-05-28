#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

#define endl "\n"
using namespace std;

int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };

int board[500][500];
bool visit[500][500];
int answer;
int N, M;

void dfs(int x, int y, int depth, int sum)
{
	if (depth == 4)
	{
		answer = max(answer, sum);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
		if (!visit[nx][ny])
		{
			visit[nx][ny] = true;
			dfs(nx, ny, depth + 1, sum + board[nx][ny]);
			visit[nx][ny] = false;
		}
	}
}
void shape1(int x, int y)
{
	int sum = 0;
	sum = board[x][y] + board[x][y + 1] + board[x][y + 2] + board[x - 1][y + 1];
	answer = max(answer, sum);
}
void shape2(int x, int y)
{
	int sum = 0;
	sum = board[x][y] + board[x][y + 1] + board[x][y + 2] + board[x + 1][y + 1];
	answer = max(answer, sum);
}
void shape3(int x, int y)
{
	int sum = 0;
	sum = board[x][y] + board[x + 1][y] + board[x + 2][y] + board[x + 1][y + 1];
	answer = max(answer, sum);
}
void shape4(int x, int y)
{
	int sum = 0;
	sum = board[x][y] + board[x - 1][y + 1] + board[x][y + 1] + board[x + 1][y + 1];
	answer = max(answer, sum);
}
void Answer()
{
	answer = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			visit[i][j] = true;
			dfs(i, j, 1, board[i][j]);
			visit[i][j] = false;
			if (i - 1 >= 0 && j + 2 < M) shape1(i, j);
			if (j + 2 < M && i + 1 < N) shape2(i, j);
			if (i + 2 < N && j + 1 < M) shape3(i, j);
			if (i + 1 < N && i - 1 >= 0 && j + 1 < M) shape4(i, j);
		}
	}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}