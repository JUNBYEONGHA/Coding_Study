#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

LL dp[10000001];

void Answer()
{
	int n;
	cin >> n;
	dp[1] = 1; dp[2] = 2;
	for (int i = 3; i <= n ; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10;
	}
	cout << dp[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}