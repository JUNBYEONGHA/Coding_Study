#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 301

int l, cx, cy, tx, ty;
int board[MAX][MAX];
int visited[MAX][MAX];
int dx[] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[] = { 2,1,-1,-2,-2,-1,1,2 };

void BFS(int x, int y)
{
	queue<pair<int, int>>Q;
	Q.push(make_pair(x, y));
	visited[x][y] = true;
	while (!Q.empty())
	{
		x = Q.front().first;
		y = Q.front().second;
		Q.pop();
		if (x == tx && y == ty)
		{
			cout << board[x][y] << endl;
			return;
		}
		for (int i = 0; i < 8; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
			if (!visited[nx][ny])
			{
				Q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
				board[nx][ny] = board[x][y] + 1;
			}
		}
	}
}

void Answer()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> l;
		cin >> cx >> cy >> tx >> ty;
		BFS(cx, cy);
		memset(board, 0, sizeof(board));
		memset(visited, 0, sizeof(visited));
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}