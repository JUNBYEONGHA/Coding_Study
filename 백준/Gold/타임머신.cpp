#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;
#define MAX 501
#define INF 2100000000

vector<pair<int, pair<int,int>>> Edge;
long long Dist[MAX];
int N, M;

bool Bellman_Ford()
{
	Dist[1] = 0;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int From = Edge[j].first;
			int To = Edge[j].second.first;
			int Cost = Edge[j].second.second;

			if (Dist[From] == INF) continue;
			if (Dist[To] > Dist[From] + Cost) Dist[To] = Dist[From] + Cost;
		}
	}
	for (int j = 0; j < M; j++)
	{
		int From = Edge[j].first;
		int To = Edge[j].second.first;
		int Cost = Edge[j].second.second;

		if (Dist[From] == INF) continue;
		if (Dist[To] > Dist[From] + Cost)
		{
			return false;
		}
	}
	return true;
}

void Answer()
{
	cin >> N >> M;
	int a, b, c;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		Edge.push_back(make_pair(a, make_pair(b, c)));
	}
	for (int i = 1; i <= N; i++) Dist[i] = INF;
	if (Bellman_Ford())
	{
		for (int i = 2; i <= N; i++)
		{
			if (Dist[i] == INF)
				cout << -1 << endl;
			else
				cout << Dist[i] << endl;
		}
	}
	else
	{
		cout << -1 << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}