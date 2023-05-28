#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 101

char MAP[MAX][MAX];
bool visit[MAX][MAX];
int COUNT[MAX][MAX];
int N, M ;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	visit[x][y] = true;
	COUNT[x][y] = 1;
	q.push(make_pair(x, y));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx > -1 && nx < N && ny > -1 && ny < M)
			{
				if (!visit[nx][ny] && MAP[nx][ny] == '1')
				{
					COUNT[nx][ny] = COUNT[x][y] + 1;
					visit[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

void Input()
{
	char A;
	cin >> N >> M;
	vector<vector<bool>> visit;
	for (int i = 0; i < N; i++)
	{
		vector<bool> visit_temp;
		for (int j = 0; j < M; j++)
		{
			cin >> A;
			visit_temp.push_back(false);
			MAP[i][j] = A;
		}
		visit.push_back(visit_temp);
	}
	
	BFS(0, 0);
	
}

void Solutution()
{
	cout << COUNT[N - 1][M - 1];
}

void Answer()
{
	Input();
	Solutution();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}
