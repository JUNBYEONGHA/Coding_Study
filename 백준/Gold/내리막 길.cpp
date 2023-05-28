#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 501

int N, M;
int MAP[MAX][MAX];
int DP[MAX][MAX];

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

int DFS(int x, int y)
{
	if (x == N - 1 && y == M - 1) return  1;
	if (DP[x][y] != -1) return DP[x][y];

	DP[x][y] = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
		if (MAP[nx][ny] < MAP[x][y])
		{
			DP[x][y] = DP[x][y] + DFS(nx, ny);
		}
	}
	return DP[x][y];
}

void Input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> MAP[i][j];
			DP[i][j] = -1;
		}
	}
}
void Solution()
{
	int Answer = DFS(0, 0);
	cout << Answer;
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