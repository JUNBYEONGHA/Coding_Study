#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

int dp[101];

void Answer()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			dp[i] = dp[i - 1];
		else
			dp[i] = dp[i - 1] + i;
	}
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;

		cout << dp[a] << endl;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}