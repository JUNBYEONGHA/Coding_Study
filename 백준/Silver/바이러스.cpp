#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 101

char MAP[MAX][MAX];
bool visit[MAX];
int N, M , answer;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int V)
{
	queue<int> q;
	visit[V] = true;
	q.push(V);

	while (!q.empty())
	{
		int V = q.front();
		q.pop();

		for (int i = 1; i <= N; i++)
		{
			if (!visit[i] && (MAP[V][i] == 1))
			{
				q.push(i);
				visit[i] = true;
				answer++;
			}
		}
	}
}

void Input()
{
	int x, y;
	answer = 0;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> x >> y;
		MAP[x][y] = 1;
		MAP[y][x] = 1;
	}
	BFS(1);
}

void Solutution()
{
	cout << answer;
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
