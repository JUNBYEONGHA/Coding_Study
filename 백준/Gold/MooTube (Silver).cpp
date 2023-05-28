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

vector<pair<int,LL>>video[5001];
int visit[5001];

int BFS(int k, int v)
{
	queue<pair<int,LL>> q;
	visit[v] = true;
	q.push({ v,k });
	int videocnt = 0;
	while (!q.empty())
	{
		int cur = q.front().first;
		int curk = q.front().second;
		q.pop();

		for (int i = 0; i < video[cur].size(); i++)
		{
			int ncur = video[cur][i].first;
			int ncurk = video[cur][i].second;

			if (!visit[ncur] && ncurk >= k)
			{
				visit[ncur] = true;
				videocnt++;
				q.push({ ncur,ncurk });
			}
		}
	}
	return videocnt;
}

void Answer()
{
	int N, Q;
	cin >> N >> Q;
	for (int i = 0; i < N - 1; i++)
	{
		int p, q, r; cin >> p >> q >> r;
		video[p].push_back({ q,r });
		video[q].push_back({ p,r });
	}
	for (int i = 0; i < Q; i++)
	{
		int k, v; cin >> k >> v;
		fill(visit, visit + 5001, false);
		cout << BFS(k, v) << endl;;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}