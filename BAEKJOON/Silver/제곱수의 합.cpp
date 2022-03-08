#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int dp[100001];
int N;

void Answer()
{
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		dp[i] = i;
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 2; j*j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[N];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}