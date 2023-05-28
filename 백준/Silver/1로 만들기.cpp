#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N , answer = 1000000;

int dp[10000001];

void Input()
{
	cin >> N;
}
void Solution()
{
	dp[1] = 0;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
		if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1);
		if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
	}
	cout << dp[N];
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