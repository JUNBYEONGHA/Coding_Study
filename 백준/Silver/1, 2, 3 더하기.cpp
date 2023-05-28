#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int dp[11];
void Answer()
{
	int N , A;
	cin >> N;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < 11; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		cout << dp[A] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}