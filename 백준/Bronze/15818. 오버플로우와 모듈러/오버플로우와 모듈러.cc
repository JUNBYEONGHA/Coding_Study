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

void Answer()
{
	LL n, m, ans = 1;
	vector <LL> nums;
	cin >> n >> m;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	for (auto num : nums) {
		ans *= (num % m);
		ans %= m;
	}
	cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}