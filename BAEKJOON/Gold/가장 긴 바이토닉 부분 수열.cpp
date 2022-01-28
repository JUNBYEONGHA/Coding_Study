#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int arr[1001];
int dp[1001];
int rdp[1001];

void Input()
{
	cin >> N;
	int A;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	for (int i = 1; i <= N; i++)
	{
		dp[i] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
	}

	for (int i = N; i >= 1; i--)
	{
		rdp[i] = 1;
		for (int j = N; j >= i; j--)
		{
			if (arr[i] > arr[j] && rdp[j] + 1 > rdp[i])
			{
				rdp[i] = rdp[j] + 1;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i <= N; i++)
	{
		answer = max(answer, dp[i] + rdp[i] - 1);
	}
	cout << answer;
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