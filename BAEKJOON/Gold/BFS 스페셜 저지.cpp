#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

int N, a, b;
vector<int> V[100001];
bool visit[100001];
int order[100001];
vector<int> bfs_order;

bool compare(int& a, int& b)
{
	return order[a] < order[b];
}

void BFS(int v)
{
	queue<int> q;
	q.push(v);
	visit[v] = true;
	bfs_order.push_back(v);
	while (!q.empty())
	{
		int v = q.front();
		q.pop();

		for (int i = 0; i < V[v].size(); i++)
		{
			if (!visit[V[v][i]])
			{
				visit[V[v][i]] = true;
				q.push(V[v][i]);
				bfs_order.push_back(V[v][i]);
			}
		}
	}
}

void Answer()
{	
	cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		V[a].push_back(b);
		V[b].push_back(a);
	}
	vector<int> temp(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> temp[i];
		order[temp[i]] = i;
	}
	for (int i = 1; i <= N; i++)
	{
		sort(V[i].begin(), V[i].end(), compare);
	}
	bfs_order.push_back(0);
	if (temp[1] == 1) BFS(1);
	if (bfs_order == temp) cout << 1;
	else cout << 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}