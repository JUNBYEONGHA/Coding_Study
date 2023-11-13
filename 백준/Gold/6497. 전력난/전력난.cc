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
struct Edge
{
	int x,y;
	int dist;
};
int parent[200001];
vector<Edge> edges;

int distSum, maxDistSum;
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
	while (true)
	{

		int N, M;
		cin >> N >> M;
		if (N == 0 && M == 0) break;
		distSum = 0; maxDistSum = 0;
		edges.clear();
		FOR0(i, N) parent[i] = i;
		FOR0(i, M)
		{
			int go, to, dist;
			cin >> go >> to >> dist;
			edges.push_back({ go , to , dist });
			maxDistSum += dist;
		}
		sort(edges.begin(), edges.end(), compare);

		FOR0(i, M)
		{
			if (find(edges[i].x) != find(edges[i].y))
			{
				merge(edges[i].x, edges[i].y);
				distSum += edges[i].dist;
			}
		}
		cout << maxDistSum - distSum << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}