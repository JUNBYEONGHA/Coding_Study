#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
#define FOR0(i,length) for(int i = 0 ; i < length ; ++i)
#define FOR1(i,length) for(int i = 1 ; i <= length ; ++i)
#define FORLength(i,length) for(int i = length - 1; i >= 0 ; --i)
using LL = long long;
using PII = std::pair<int, int>;
using namespace std;
int parent[1001];
struct Edge
{
	int x,y;
	double dist;
};
vector<Edge> edges;
vector<PII> paths;

double distSum;
bool compare(Edge& a, Edge& b)
{
	return a.dist < b.dist;
}
int find(int x)
{
	if (x == parent[x]) return x;
	return parent[x] = find(parent[x]);
}
void merge(int a, int b)
{
	a = find(a);
	b = find(b);
	parent[a] = b;
}

void Answer()
{
	int N, M;
	cin >> N >> M;
	paths.resize(N + 1);
	FOR1(i, N) parent[i] = i;
	FOR1(i, N)
	{
		cin >> paths[i].first >> paths[i].second;
	}
	FOR1(i, M)
	{
		int x, y; cin >> x >> y;
		if (find(x) != find(y))
		{
			merge(x, y);
		}
	}
	FOR1(i, N)
	{
		for (int j = i + 1; j <= N ; j++)
		{
			if (find(i) != find(j))
			{
				edges.push_back({ i,j ,
					sqrt(pow(paths[i].first - paths[j].first, 2) + pow(paths[i].second - paths[j].second, 2)) });
			}
		}
	}
	sort(edges.begin(), edges.end(), compare);

	FOR0(i, edges.size())
	{
		if (find(edges[i].x) != find(edges[i].y))
		{
			merge(edges[i].x, edges[i].y);
			distSum += edges[i].dist;
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << distSum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}