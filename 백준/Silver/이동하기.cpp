#include<iostream>

#define endl "\n"
using namespace std;

int miro[1001][1001];
int dp[1001][1001];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> miro[i][j];
			dp[i][j] = miro[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if(!(i == N-1))
				dp[i + 1][j] = max(dp[i][j] + miro[i + 1][j], dp[i + 1][j]);
			if (!(i == N - 1) && !(j == M - 1))
				dp[i + 1][j + 1] = max(dp[i][j] + miro[i + 1][j + 1], dp[i + 1][j + 1]);
			if (!(j == M - 1))
				dp[i][j + 1] = max(dp[i][j] + miro[i][j + 1], dp[i][j + 1]);
		}
	}
	cout << dp[N - 1][M - 1];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}