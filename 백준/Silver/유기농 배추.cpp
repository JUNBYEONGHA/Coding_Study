#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;

int Farm[51][51];
bool visit[51][51];

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

int BFS(int x, int y, int N, int M)
{
	queue<pair<int, int>> Q;
	Q.push(make_pair(x, y));
	visit[x][y] = true;
	while (!Q.empty())
	{
		x = Q.front().first;
		y = Q.front().second;
		Q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (Farm[nx][ny] == 1 && !visit[nx][ny]) 
			{
				visit[nx][ny] = true;
				Q.push(make_pair(nx, ny));
			}
		}
	}
	return 1;
}
void Answer()
{
	int time, a, b, c, A, B;
	cin >> time;
	while (time--)
	{
		cin >> a >> b >> c;
		for (int i = 0; i < c; i++)
		{
			cin >> A >> B;
			Farm[A][B] = 1;
		}
		int result = 0;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (Farm[i][j] == 1 && !visit[i][j])
					result += BFS(i,j,a,b);
			}
		}
		cout << result << endl;
		memset(Farm , 0 , sizeof(Farm));
		memset(visit, false, sizeof(visit));
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}