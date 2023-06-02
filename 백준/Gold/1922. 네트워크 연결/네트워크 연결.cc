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


vector<int> parent;
int getParent(int num)
{
	if (num == parent[num]) return num;
	return parent[num] = getParent(parent[num]);
}
void unionParent(int a, int b)
{
	a = getParent(a);
	b = getParent(b);
	if (a != b)
	{
		parent[a] = b;
	}
}
bool findParent(int a, int b)
{
	a = getParent(a);
	b = getParent(b);
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Answer()
{
	int N, M;
	cin >> N >> M;
	vector<pair<int, pair<int, int>>> edge;

	for (int i = 0; i < M; i++)
	{
		int cost, a, b;
		cin >> a >> b >> cost;
		edge.push_back({ cost, {a,b} });
	}
	for (int i = 0; i <= N; i++)
	{
		parent.push_back(i);
	}
	sort(edge.begin(), edge.end());
	int result = 0;
	for (int i = 0; i < M; i++)
	{
		int cost = edge[i].first;
		int a = edge[i].second.first;
		int b = edge[i].second.second;
		if (!findParent(a, b))
		{
			result += cost;
			unionParent(a, b);
		}
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