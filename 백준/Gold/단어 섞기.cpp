#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

#define endl "\n"
using namespace std;	

int tc, dp[201][201];
string a, b, c;
int sol(int n, int m) {
    if (n + m == c.size()) return 1;
    int& ret = dp[n][m];
    if (ret != -1) return ret;
    if (n < a.size() && c[n + m] == a[n] && sol(n + 1, m)) return ret = 1;
    if (m < b.size() && c[n + m] == b[m] && sol(n, m + 1)) return ret = 1;
    return ret = 0;
}

void Answer()
{
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cin >> a >> b >> c;
        memset(dp, -1, sizeof(dp));
        string ret = sol(0, 0) ? "yes" : "no";
        cout << "Data set " << i << ": " << ret << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}