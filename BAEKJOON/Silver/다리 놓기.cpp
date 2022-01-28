#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int dp[31][31];

void Input()
{
	cin >> N;
}
void Solution()
{
	for (int i = 0; i <= 30 ; i++)
	{
		dp[1][i] = i;
	}
	for (int i = 2; i <= 30; i++)
	{
		for (int j = i; j <= 30; j++)
		{
			for (int k = j - 1; k >= 1; k--)
			{
				dp[i][j] += dp[i - 1][k];
			}
		}
	}
	int A, B;
	while (N--)
	{
		cin >> A >> B;
		cout << dp[A][B] << endl;
	}
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