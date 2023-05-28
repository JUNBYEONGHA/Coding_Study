#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 100001

int N , maxDist , maxNode;
int arr[MAX];
bool visit[MAX];
vector<pair<int,int>> v[MAX];

void DFS(int k,int dist)
{
	if (visit[k])
		return;
	if (maxDist < dist)
	{
		maxDist = dist;
		maxNode = k;
	}

	visit[k] = true;
	for (int i = 0; i < v[k].size(); i++)
	{
		int nextIndex = v[k][i].first;
		int nextDist = v[k][i].second;
		DFS(nextIndex, nextDist + dist);
	}
}

void Answer()
{
	cin >> N;
	int V;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> V;
		int x, dist;
		cin >> x;
		cin >> dist;
		v[V].push_back({ x,dist });
		v[x].push_back({ V,dist });
	}
	DFS(1 , 0);
	memset(visit, 0, sizeof(visit));
	maxDist = 0;
	DFS(maxNode, 0);

	cout << maxDist;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}