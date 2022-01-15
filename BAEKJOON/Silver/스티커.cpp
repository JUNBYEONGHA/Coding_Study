#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 100001
int sticker[2][MAX];
int dp[2][MAX];

void Input()
{
	int Tcase, R;
	cin >> Tcase;
	for (int k = 0; k < Tcase; k++)
	{
		cin >> R;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < R; j++)
			{
				cin >> sticker[i][j];
			}
		}
		dp[0][0] = sticker[0][0];
		dp[1][0] = sticker[1][0];
		dp[0][1] = sticker[0][1] + dp[1][0];
		dp[1][1] = sticker[1][1] + dp[0][0];

		for (int i = 2; i < R; i++)
		{
			dp[0][i] = sticker[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] = sticker[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
		}

		cout << max(dp[0][R - 1], dp[1][R - 1]) << endl;
	}
}
void Answer()
{
	Input();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}