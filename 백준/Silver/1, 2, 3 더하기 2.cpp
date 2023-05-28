#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int n, k;
vector<string> dp[11];

void Answer()
{
	cin >> n >> k;
	dp[1].push_back("1");
	dp[2].push_back("1+1");
	dp[2].push_back("2");
	dp[3].push_back("1+1+1");
	dp[3].push_back("1+2");
	dp[3].push_back("2+1");
	dp[3].push_back("3");
	for (int i = 4; i <= n; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			for (string op : dp[i-j])
			{
				dp[i].push_back(op + "+" + to_string(j));
			}
		}
	}
	if (dp[n].size() < k)
		cout << -1;
	else
	{
		sort(dp[n].begin(), dp[n].end());
		cout << dp[n][k - 1];
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}