#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int dp[101][10];

void Input()
{
	cin >> N;
}
void Solution()
{
	for (int i = 1; i < 10; i++)
	{
		dp[1][i] = 1;
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				dp[i][0] = dp[i - 1][j + 1];
			else if (j == 9)
				dp[i][9] = dp[i - 1][j - 1];
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			dp[i][j] %= 1000000000;
		}
	}
	int answer = 0;
	for (int i = 0; i < 10; i++)
	{
		answer = (answer + dp[N][i]) % 1000000000;
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