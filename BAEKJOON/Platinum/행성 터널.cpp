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
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int parent[MAX];
vector<pii> X;
vector<pii> Y;
vector<pii> Z;
vector<piii> planet;
int N;

int find_root(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = find_root(parent[x]);
}
bool union_root(int x, int y)
{
	x = find_root(x);
	y = find_root(y);

	if (x == y) return false;
	else
	{
		parent[x] = y;
		return true;
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		parent[i] = i;
	}
	for (int i = 0; i < N; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		X.push_back({ x,i });
		Y.push_back({ y,i });
		Z.push_back({ z,i });
	}
	sort(X.begin(), X.end());
	sort(Y.begin(), Y.end());
	sort(Z.begin(), Z.end());
	for (int i = 0; i < N - 1; i++)
	{
		planet.push_back({ X[i + 1].first - X[i].first,{X[i].second , X[i + 1].second } });
		planet.push_back({ Y[i + 1].first - Y[i].first,{Y[i].second , Y[i + 1].second } });
		planet.push_back({ Z[i + 1].first - Z[i].first,{Z[i].second , Z[i + 1].second } });
	}
	sort(planet.begin(), planet.end());
	int result = 0;
	for (int i = 0; i < planet.size(); i++)
	{
		int dis = planet[i].first;
		int x = planet[i].second.first;
		int y = planet[i].second.second;

		if (union_root(x, y)) result += dis;
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

