#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;
#define MOD 1000000009
int t, n;
long long dp[100001][4];

void Answer()
{
	cin >> t;
	dp[1][1] = 1; dp[2][2] = 1;
	dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;

	while (t--)
	{
		cin >> n;
		if ((dp[n][1] + dp[n][2] + dp[n][3]) == 0)
		{
			for (int i = 4; i <= n; i++)
			{
				dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
				dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
				dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
			}
		}
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % MOD << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}