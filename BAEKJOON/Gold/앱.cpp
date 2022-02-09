#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N, M, ans, sum;
int bite[101], cost[101];
int dp[101][10001];

void Answer()
{
	cin >> N >> M;
	for (int i = 1; i <= N; i++) cin >> bite[i];
	for (int i = 1; i <= N; i++)
	{
		cin >> cost[i];
		sum += cost[i];
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= sum; j++)
		{
			if (j - cost[i] >= 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - cost[i]] + bite[i]);

			dp[i][j] = max(dp[i][j], dp[i - 1][j]);
		}
	}
	for (int i = 0; i <= sum; i++)
	{
		if (dp[N][i] >= M)
		{
			cout << i << endl;
			break;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}