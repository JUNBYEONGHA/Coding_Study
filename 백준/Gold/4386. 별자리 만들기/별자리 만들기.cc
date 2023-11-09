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
using namespace std;

vector<pair<float, int>> edge[101];
pair<float, float> dots[101];
bool visited[101];
float disSum;

void Prim()
{
	priority_queue<pair<float, int>, vector<pair<float, int>>, greater<pair<float, int>>> pq;
	pq.push({ 0,0 });
	while (!pq.empty())
	{
		int curNode = pq.top().second;
		float curDis = pq.top().first;
		pq.pop();
		if (visited[curNode]) continue;
		visited[curNode] = true;
		disSum += curDis;

		FOR0(i, edge[curNode].size())
		{
			int nextNode = edge[curNode][i].second;
			float nextDis = edge[curNode][i].first;
			if (visited[nextNode]) continue;
			pq.push({ nextDis,nextNode });
		}
	}
}

void Answer()
{
	int N; cin >> N;
	FOR0(i, N)
	{
		cin >> dots[i].first >> dots[i].second;
	}
	FOR0(i, N)
	{
		FOR0(j, N)
		{
			edge[i].push_back({ sqrt(pow(dots[i].first - dots[j].first,2) +
				pow(dots[i].second - dots[j].second,2)), j });
		}
	}
	Prim();
	cout << fixed;
	cout.precision(2);
	cout << disSum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}