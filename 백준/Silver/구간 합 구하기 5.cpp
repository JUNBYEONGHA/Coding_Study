#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int arr[1025][1025];
int dp[1025][1025];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
			dp[i][j] = arr[i][j];
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
		}
	}
	int A, B, C, D;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B >> C >> D;
		cout << dp[C][D] - dp[A - 1][D] - dp[C][B - 1] + dp[A - 1][B - 1] << endl;
	}


}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}