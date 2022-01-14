#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 51
int MAP[MAX][MAX];
int visit[MAX][MAX];
int n, m, clean = 0;
int sx, sy, dir;

int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };

void BFS()
{
	while (true)
	{
		if (!visit[sx][sy])
		{
			visit[sx][sy] = true;
			clean++;
			MAP[sx][sy] = 2;
		}
		bool go = false;
		for (int i = 0; i < 4; i++)
		{
			dir = (dir + 3) % 4;
			int nx = sx + dx[dir];
			int ny = sy + dy[dir];

			if (MAP[nx][ny] == 0 && !visit[nx][ny])
			{
				sx += dx[dir];
				sy += dy[dir];
				go = true;
				break;
			}
		}
		if(go == false)
		{
			int back = (dir + 2) % 4;
			if (MAP[sx + dx[back]][sy + dy[back]] == 1) break;
			
			sx += dx[back];
			sy += dy[back];
		}
	}
}

void Input()
{
	cin >> n >> m;
	cin >> sx >> sy >> dir;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> MAP[i][j];
		}
	}
	BFS();
	cout << clean;
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