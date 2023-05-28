#include <iostream>
#include <stack>
#include <map>

#define endl "\n"
using namespace std;

stack<long long> s;
long long temp, res;
int n;


typedef long long ll;
typedef pair<ll, ll> p;

map<p, int> dp;

int f(ll l, ll r) {
	if (!l && !r) return 0;
	if (dp.find({ l, r }) != dp.end()) return dp[{l, r}];

	int ret = 0;
	for (int i = 1; i <= 40; i++) { //[l, r]�� �ִ� O(lgN)���� �������� ����
		ll s = (1ll << i) - 1; //2^i - 1
		ll e = (1ll << (i + 1)) - 2; //2^(i+1) - 2
		s = max(l, s), e = min(r, e); //���� ����

		ll ss = s - (1ll << i) + 1; //2^i - 1��ŭ ������ �ϰ� ���� ����
		ll ee = e - (1ll << i) + 1;

		if (s <= e) ret = max(ret, f(ss, ee) + i);
	}

	return dp[{l, r}] = ret;
}

void Answer()
{
	int t; cin >> t;
	while (t--) {
		ll x, y; cin >> x >> y;
		cout << f(x, y) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}