#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;

const int INF = 1e9 + 7;
vector<pair<int, int>> node[2][10001];
vector<int> d[2];
int N, M, X;

int dijkstra(int k)
{
	d[k][X] = 0;
	priority_queue<pair<int, int>> pq;
	pq.push({ X,0 });
	while (!pq.empty())
	{
		int current = pq.top().first;
		int dist = -pq.top().second;
		pq.pop();
		if (d[k][current] < dist) continue;
		for (int i = 0; i < node[k][current].size(); i++)
		{
			int next = node[k][current][i].first;
			int nextdist = dist + node[k][current][i].second;
			if (nextdist < d[k][next])
			{
				d[k][next] = nextdist;
				pq.push({ next , -nextdist });
			}
		}
	}
	return d[k][X];
}

void Answer()
{
	cin >> N >> M >> X;
	for (int i = 0; i < M; i++)
	{
		int A, B, cost;
		cin >> A >> B >> cost;	
		node[0][A].push_back({ B,cost });
		node[1][B].push_back({ A,cost });
	}
	d[0].resize(N+1,INF); 
	d[1].resize(N+1,INF); 
	int result = 0;
	dijkstra(0);
	dijkstra(1);
	for (int i = 1; i <= N; i++)
	{
		result = max(result, d[0][i] + d[1][i]);
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}