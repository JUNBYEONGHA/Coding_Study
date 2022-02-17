#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>

#define endl "\n"
using namespace std;
#define MAX 101
#define INF 10000000
typedef tuple<int, int, int> TUPLE;


int N, M, K;
int u, v, c, d;
vector<TUPLE> travel[MAX];
int dp[MAX][10001] , ans;

void dijkstra()
{
	priority_queue<TUPLE,vector<TUPLE>,greater<TUPLE>> PQ;
	PQ.push({0,1,0});
	dp[1][0] = 0;
	while (!PQ.empty())
	{
		int time = get<0>(PQ.top());
		int now = get<1>(PQ.top());
		int money = get<2>(PQ.top());
		PQ.pop();
		if (dp[now][money] < time) continue;
		for (int i = 0; i < travel[now].size(); i++)
		{
			int next_time = time + get<0>(travel[now][i]);
			int next = get<1>(travel[now][i]);
			int next_money = money + get<2>(travel[now][i]);

			if (next_money > M) continue;
			if (dp[next][next_money] <= next_time) continue;
			for (int j = next_money ; j <= M ; j++)
			{
				if (dp[next][j] > next_time)
					dp[next][j] = next_time;
			}
			PQ.push({ next_time,next,next_money });
		}
	}
}

void Answer()
{
	int T;
	cin >> T;
	while (T--)
	{
		for (int i = 0; i <= 100; i++)
		{
			travel[i].clear();
			for (int j = 0; j <= 10000; j++)
				dp[i][j] = INF;
		}
		ans = INF;
		cin >> N >> M >> K;
		for (int i = 0; i < K; i++)
		{
			cin >> u >> v >> c >> d;
			travel[u].push_back({d,v,c});
		}
		dijkstra();
		for (int i = 1; i <= M; i++)
		{
			ans = min(ans, dp[N][i]);
		}
		if (ans == INF) cout << "Poor KCM" << endl;
		else cout << ans << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}