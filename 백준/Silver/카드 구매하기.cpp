#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int n;
int dp[1001] , arr[1001];

void Answer()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i ; j++)
		{
			dp[i] = max(dp[i], dp[i - j] + arr[j]);
		}
	}
	cout << dp[n]; 
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}