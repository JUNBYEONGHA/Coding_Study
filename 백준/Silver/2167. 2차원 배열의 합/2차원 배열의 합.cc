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

int arr[301][301];
int dp[301][301];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> dp[i][j];
			dp[i][j] += dp[i - 1][j] + dp[i][j - 1]
				- dp[i - 1][j - 1];
		}
	}

	int K; cin >> K;
	for (int i = 0; i < K; i++)
	{
		int xs, ys, xe, ye;
		cin >> xs >> ys >> xe >> ye;
		cout << dp[xe][ye] - dp[xs - 1][ye]
			- dp[xe][ys - 1] + dp[xs - 1][ys - 1]
			<< endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}