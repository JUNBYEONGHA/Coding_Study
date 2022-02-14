#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;
#define MAX 20001
#define INF 300001

int dijkstra[MAX];
vector <pair<int, int>> vertex[MAX];
int v, e, k;

void Dijkstra()
{
	priority_queue<pair<int, int>> PQ;
	PQ.push(make_pair(0, k));
	dijkstra[k] = 0;
	while (!PQ.empty())
	{
		int cost = -PQ.top().first;
		int cur = PQ.top().second;
		PQ.pop();
		for (int i = 0; i < vertex[cur].size() ; i++)
		{
			int next = vertex[cur][i].first;
			int ncost = vertex[cur][i].second;

			if (dijkstra[next] > cost + ncost)
			{
				dijkstra[next] = cost + ncost;
				PQ.push(make_pair(-dijkstra[next], next));
			}
		}
	}
}

void Answer()
{
	cin >> v >> e >> k;
	int a, b, c;
	for (int i = 1; i <= e; i++)
	{
		cin >> a >> b >> c;
		vertex[a].push_back(make_pair(b, c));
	}
	for (int i = 1; i <= v; i++) dijkstra[i] = INF;
	Dijkstra();
	for (int i = 1; i <= v; i++)
	{
		if (dijkstra[i] == INF) cout << "INF" << endl;
		else cout << dijkstra[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}