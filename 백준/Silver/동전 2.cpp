#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 110

int N, K;
int coin[MAX];
int dp[100010];

void Input()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> coin[i];
	fill(dp, dp + 100010, 100010);
	dp[0] = 0;
}
void Solution()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = coin[i]; j <= K; j++)
		{
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}
	dp[K] = (dp[K] == 100010) ? -1 : dp[K];
	cout << dp[K];
}
void Answer()
{
	Input();
    Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}