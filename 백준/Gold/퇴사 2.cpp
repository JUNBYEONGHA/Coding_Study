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

#define endl "\n"
using LL = long long;
using namespace std;

int dp[1500001];
int arr[1500001][2];

void Answer()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	int cnt = 0;
	for (int i = 1; i <= N + 1; i++)
	{
		cnt = max(cnt, dp[i]);
		if (i + arr[i][0] > N + 1) continue;
		dp[i + arr[i][0]] = max(cnt + arr[i][1], dp[i + arr[i][0]]);
	}
	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}