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

#define endl "\n"
using LL = long long;
using namespace std;

#define MAX 100001
using p = pair<int, pair<int, int>>;
int parent[MAX];
vector<p> edges;
int v, e;


int find_root(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = find_root(parent[x]);
}
void union_root(int x, int y)
{
	x = find_root(x);
	y = find_root(y);

	if (x != y) parent[y] = x;
}
vector<p> kruskal()
{
	vector<p> mst;
	for (int i = 0; i < edges.size(); i++)
	{
		p cur_edge = edges[i];

		int f = cur_edge.second.first;
		int s = cur_edge.second.second;

		if (find_root(f) == find_root(s)) continue;

		mst.push_back(cur_edge);
		union_root(f, s);

		if (mst.size() == v - 1) return mst;
	}
}

void Answer()
{
	cin >> v >> e;
	for (int i = 0; i < e; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		edges.push_back({ c,{a,b} });
	}
	sort(edges.begin(), edges.end());
	for (int i = 1; i <= v; i++)
	{
		parent[i] = i;
	}
	vector<p> mst = kruskal();
	int result = 0;
	for (int i = 0; i < mst.size() ; i++)
	{
		result += mst[i].first;
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

