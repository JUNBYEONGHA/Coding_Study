#include<iostream>

#define endl "\n"
using namespace std;

int dp[1001] , arr[1001];
int N;

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int MAX = 0;
	for (int i = 0; i < N; i++)
	{
		dp[i] = arr[i];
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
			{
				dp[i] = dp[j] + arr[i];
			}
		}
		MAX = max(dp[i], MAX);
	}
	cout << MAX;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}