#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int N;
long long dp[91];

void Answer()
{
	cin >> N;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= N ; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[N];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}