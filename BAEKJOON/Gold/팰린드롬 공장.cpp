#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define endl "\n"

using namespace std;
#define MAX 55

int dp[MAX][MAX];
string s;

int solve(int l, int r, string a) {
	if (dp[l][r] != -1)return dp[l][r];
	if (l >= r) return 0;
	int& ret = dp[l][r];
	ret = min({ solve(l + 1, r, a) + 1, solve(l, r - 1, a) + 1, solve(l + 1, r - 1, a) + (a[l] != a[r]) });

	return ret;
}

void Answer()
{
	cin >> s;
	memset(dp, -1, sizeof(dp));
	int ans = solve(0, s.size() - 1, s);
	for (int i = 0; i < s.size(); i++) {
		for (int j = i + 1; j < s.size(); j++) {
			memset(dp, -1, sizeof(dp));
			string tmp = s;
			swap(tmp[i], tmp[j]);
			ans = min(ans, solve(0, s.size() - 1, tmp) + 1);
		}
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}