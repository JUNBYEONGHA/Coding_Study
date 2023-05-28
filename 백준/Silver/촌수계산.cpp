#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 101

char MAP[MAX][MAX];
bool visit[MAX];
int COUNT[MAX];
int N, M , pos1 , pos2;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int V)
{
	queue <int> q;
	q.push(V);
	visit[V] = true;

	while (!q.empty())
	{
		V = q.front();
		q.pop();
		for (int i = 1; i <= N; i++)
		{
			if (!visit[i] && MAP[V][i] == 1)
			{
				visit[i] = true;
				COUNT[i] += COUNT[V] + 1;
				q.push(i);
			}
		}
	}
}

void Input()
{
	char A;
	int x, y;
	cin >> N;
	cin >> pos1 >> pos2;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> x >> y;
		MAP[x][y] = 1;
		MAP[y][x] = 1;
	}
	BFS(pos1);
}

void Solutution()
{
	if (COUNT[pos2] == 0)
		COUNT[pos2] = -1;
	cout << COUNT[pos2];
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
