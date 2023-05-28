#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

char c;
int R, C;
int map[10001][501];
int visit[10001][501];
int dx[3] = { -1,0,1 };
int dy[3] = { 1,1,1 };
bool check;
int cnt;

void dfs(int x, int y)
{
	visit[x][y] = true; // �湮 ���
	if (y == C)
	{
		cnt++;
		check = true;
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		if (next_x >= 1 && next_y >= 1 && next_x <= R && next_y <= C)
		{
			if (map[next_x][next_y] == 1 && !visit[next_x][next_y])
			{
				dfs(next_x, next_y);
				if (check) return;
			}
		}
	}
}

void Answer()
{
	cin >> R >> C;

	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
		{
			cin >> c;
			if (c == '.') map[i][j] = 1;
			else map[i][j] = 0;
		}

	for (int i = 1; i <= R; i++)
	{
		check = false;
		dfs(i, 1);
	}

	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}