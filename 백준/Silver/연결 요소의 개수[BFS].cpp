#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

vector<int> graph[1001];
bool visit[1001];
int N, M;

void BFS(int index)
{
	queue<int> q;
	q.push(index);
	visit[index] = true;

	while (!q.empty())
	{
		int index = q.front();

		q.pop();
		for (int i = 0; i < graph[index].size(); i++)
		{
			if (visit[graph[index][i]]) continue;
			visit[graph[index][i]] = true;
			q.push(graph[index][i]);
		}
	}
}

void Answer()
{
	cin >> N >> M;
	int u, v;
	int answer = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)
	{
		if (visit[i]) continue;
		BFS(i);
		answer++;
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}