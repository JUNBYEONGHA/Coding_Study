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

LL dp[31][31];

LL getpill(int all, int half)
{
	if (half == -1) return 0;
	if (all == 0) return 1;
	LL& ret = dp[all][half];
	if (ret) return dp[all][half];
	ret = getpill(all - 1, half + 1) + getpill(all, half - 1);
	return ret;
}

void Answer()
{
	while (true)
	{
		int N; cin >> N;
		if (N == 0) break;
		cout << getpill(N, 0) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}