#include<iostream>

#define endl "\n"
using namespace std;

#define MOD 10007
int N;
int dp[10];

void Answer()
{
	cin >> N;
	for (int i = 0; i < 10; i++)
		dp[i] = 1;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				dp[j] += dp[k];
			}
			dp[j] %= MOD;
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++)
		result += dp[i];
	cout << result % MOD;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}