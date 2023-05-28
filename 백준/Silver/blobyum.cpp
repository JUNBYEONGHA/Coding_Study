#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int K, N,result = 0;
	cin >> K >> N;
	vector<int> pie(K) , dp(K);
	for (int i = 0; i < K; i++)
	{
		cin >> pie[i];
	}
	for (int j = 0; j < N; j++)
		dp[0] += pie[j];
	result = dp[0];
	for (int i = 1; i < K; i++)
	{
		dp[i] = (dp[i - 1] + pie[(i-1+N) % K] - pie[(i-1) % K]);
		if (result < dp[i]) result = dp[i];
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}