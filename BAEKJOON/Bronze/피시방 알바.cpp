#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int dp[101];
void Answer()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		dp[a]++;
	}
	int count = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (dp[i] > 1) count += dp[i] - 1;
	}
	cout << count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}