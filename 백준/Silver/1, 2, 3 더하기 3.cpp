#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

#define MOD 1000000009
long long dp[1000001];
int t, n;

void Answer()
{
	cin >> t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while (t--)
	{
		cin >> n;
		if (dp[n] == 0)
		{
			for (int i = 4; i <= n; i++)
			{
				dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
			}
		}
		cout << dp[n] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}