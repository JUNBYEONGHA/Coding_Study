#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 1001

int graph[MAX][MAX];
bool visit[MAX];
int N, M, V;

void DFS(int v)
{
	visit[v] = true;
	cout << v << " ";
	for (int i = 1; i <= N; i++)
	{
		if (graph[v][i] == 1 && !visit[i])
		{
			DFS(i);
		}
	}
}
void BFS(int v)
{
	cout << endl;
	memset(visit, false, sizeof(visit));
	queue<int> q;
	q.push(v);
	visit[v] = true;
	cout << v << " ";

	while (!q.empty())
	{
		v = q.front();
		q.pop();

		for (int w = 0; w <= N; w++)
		{
			if (graph[v][w] == 1 && !visit[w])
			{
				q.push(w);
				visit[w] = true;
				cout << w << " ";
			}
		}
	}

}

void Input()
{
	int A, B;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		graph[A][B] = 1;
		graph[B][A] = 1;
	}
}

void Solutution()
{
	DFS(V);
	BFS(V);
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
