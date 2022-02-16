#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;
#define MAX 50001
#define INF 2100000000

vector<pair<int, int>> graph[MAX];
vector<int> find_this;
int n, m, t;
int s, g, h;

vector<int> Dijkstra(const int& start)
{
	vector<int> d(n + 1, INF);

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
	return d;
}

void Answer()
{
	int T;
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		cin >> n >> m >> t; // 교차로 , 도로 , 목적지 후보
		cin >> s >> g >> h; // 출발지 , g와 h 사이의 도로
		
		for (int i = 1; i <= n; i++) graph[i].clear();
		int a, b, c;
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b >> c;
			graph[a].push_back(make_pair(b, c));
			graph[b].push_back(make_pair(a, c));
		}
		int temp;
		find_this.clear();
		for (int i = 0; i < t; i++)
		{
			cin >> temp;
			find_this.push_back(temp);
		}
		sort(find_this.begin(), find_this.end());

		vector<int> root = Dijkstra(s);
		vector<int> branch1 = Dijkstra(g);
		vector<int> branch2 = Dijkstra(h);
		
		vector<int> ret;
		for (int i = 1; i <= n; i++)
		{
			if (root[i] == root[g] + branch1[h] + branch2[i]
				|| root[i] == root[h] + branch1[i] + branch2[g])
				ret.push_back(i);
		}
		for (int i = 0; i < find_this.size(); i++)
		{
			int here = find_this[i];
			for (int j = 0; j < ret.size(); j++)
			{
				if (here == ret[j])
					cout << here << " ";
			}
		}
		cout << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}