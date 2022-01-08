#include <iostream>

#define endl "\n"
using namespace std;

int dp[1001][1001] = { 0, };

void Input()
{
	int a, c;
	cin >> a >> c;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			if (i == j || j == 0)
			{
				dp[i][j] = 1;
				continue;
			}
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
		}
	}
	cout << dp[a][c];
}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}
