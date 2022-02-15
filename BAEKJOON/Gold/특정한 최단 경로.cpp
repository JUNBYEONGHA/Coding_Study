#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;
#define MAX 801
#define INF 10010000

int v, e, start, target;
vector<pair<int, int>> graph[MAX];
int d[MAX];

void Dijkstra()
{
	priority_queue<pair<int, int>> PQ;
	PQ.push(make_pair(0, start));
	d[start] = 0;
	while (!PQ.empty())
	{
		int cost = -PQ.top().first;
		int cur = PQ.top().second;
		PQ.pop();

		for (int i = 0; i < graph[cur].size() ; i++)
		{
			int next = graph[cur][i].first;
			int ncost = graph[cur][i].second;

			if (d[next] > cost + ncost)
			{
				d[next] = cost + ncost;
				PQ.push(make_pair(-d[next], next));
			}
		}
	}
}

void Answer()
{
	cin >> v >> e;
	int a, b, c;
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> c;
		graph[a].push_back(make_pair(b, c));
		graph[b].push_back(make_pair(a, c));
	}
	start = 1;
	int v1, v2;
	cin >> v1 >> v2;
	int sToV1, sToV2, V1ToV2, V1ToN, V2ToN;
	for (int i = 1; i <= v; i++) d[i] = INF;
	Dijkstra();
	sToV1 = d[v1];
	sToV2 = d[v2];
	start = v1;

	for (int i = 1; i <= v; i++) d[i] = INF;
	Dijkstra();
	V1ToV2 = d[v2];
	V1ToN = d[v];
	start = v2;

	for (int i = 1; i <= v; i++) d[i] = INF;
	Dijkstra();
	V2ToN = d[v];

	int result = INF;
	result = min(result, sToV1 + V1ToV2 + V2ToN);
	result = min(result, sToV2 + V1ToV2 + V1ToN);
	if (V1ToV2 == INF || result == INF) cout << -1;
	else cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}