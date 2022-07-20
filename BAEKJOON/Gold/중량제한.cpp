#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;


int N, M;
int start, finish;
vector<pair<int, int>> _bridge[100001];
bool visit[100001];

bool BFS(int cost)
{
	queue<int> q;
	q.push(start);
	visit[start] = true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == finish)
			return true;

		for (int i = 0; i < _bridge[cur].size(); i++)
		{
			int next = _bridge[cur][i].first;
			int nextc = _bridge[cur][i].second;

			if (!visit[next] && cost <= nextc)
			{
				visit[next] = true;
				q.push(next);
			}
		}
	}
	return false;
}

void Answer()
{
	cin >> N >> M;
	int A, B, C;
	int maxcost = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B >> C;
		_bridge[A].push_back(make_pair(B, C));
		_bridge[B].push_back(make_pair(A, C));
		maxcost = max(maxcost, C);
	}
	cin >> start >> finish;
	int low = 0, high = maxcost;
	while (low <= high)
	{
		memset(visit, false, sizeof(visit));

		int mid = (low + high) / 2;
		if (BFS(mid))
			low = mid + 1;
		else
			high = mid - 1;
	}
	cout << high << endl;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}