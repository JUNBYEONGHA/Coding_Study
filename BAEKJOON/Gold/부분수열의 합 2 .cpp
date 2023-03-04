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


vector<int> v;
int n, s, half;
long long ans;
map<int, int> mp;

void dfsLeft(int idx, int sum) {
	if (idx == half) {
		mp[sum]++; return;
	}
	dfsLeft(idx + 1, sum);
	dfsLeft(idx + 1, sum + v[idx]);
}

void dfsRight(int idx, int sum) {
	if (idx == n) {
		ans += mp[s - sum]; return;
	}
	dfsRight(idx + 1, sum);
	dfsRight(idx + 1, sum + v[idx]);
}

void Answer()
{
	cin >> n >> s;
	half = n / 2; v.resize(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	dfsLeft(0, 0);
	dfsRight(half, 0);
	if (s == 0) ans--;
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}