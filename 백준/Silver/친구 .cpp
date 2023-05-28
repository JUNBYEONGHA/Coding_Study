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

#define endl "\n"
using LL = long long;
using namespace std;

bool visit[51];
vector<int> graph[51];

void DFS(int index,int level)
{
	visit[index] = true;
	if (level == 2) return;
	for (int i = 0; i < graph[index].size(); i++)
	{
		DFS(graph[index][i], level + 1);
	}
}

void Answer()
{
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			char a; cin >> a;
			if (a == 'Y')
			{
				graph[i].push_back(j);
			}
		}
	}
	int cnt = 0 , result = 0;
	for (int i = 1; i <= N; i++)
	{
		fill(visit, visit + 51, 0);
		cnt = 0;
		DFS(i,0);
		for (int i = 1; i <= N; i++)
		{
			if (visit[i]) cnt++;
		}
		result = max(result, cnt);
	}
	cout << result - 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}