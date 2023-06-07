#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

int dp[2][1000001];

void Answer()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> dp[0][i];
		dp[1][i] = dp[0][i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (dp[0][i] > dp[0][i + 1])
			dp[0][i + 1] = dp[0][i];
	}
	for (int i = n; i > 0; i--)
	{
		if (dp[1][i] > dp[1][i - 1])
			dp[1][i - 1] = dp[1][i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << dp[0][i] << " " << dp[1][i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}