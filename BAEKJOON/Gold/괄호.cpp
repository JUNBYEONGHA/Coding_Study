#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define endl "\n"
using namespace std;

string dp[1001];
map<char, char> _map;
bool check(string before, string after) {
	if (before == "" && after == "") return false;
	if (before == "") return true;
	if (before.size() > after.size()) return true;
	else if (before.size() < after.size()) return false;
	else {
		string _before = "";
		for (char a : before) _before += _map[a];
		string _after = "";
		for (char a : after) _after += _map[a];
		return _before > _after;
	}
}

void Answer()
{
	int n, t;
	_map['('] = '1';
	_map[')'] = '2';
	_map['{'] = '3';
	_map['}'] = '4';
	_map['['] = '5';
	_map[']'] = '6';
	dp[1] = "()";
	dp[2] = "{}";
	dp[3] = "[]";
	for (int idx = 1; idx <= 1000; idx++) {
		if (idx % 2 == 0 && check(dp[idx], '(' + dp[idx / 2] + ')'))dp[idx] = '(' + dp[idx / 2] + ')';
		if (idx % 3 == 0 && check(dp[idx], '{' + dp[idx / 3] + '}'))dp[idx] = '{' + dp[idx / 3] + '}';
		if (idx % 5 == 0 && check(dp[idx], '[' + dp[idx / 5] + ']'))dp[idx] = '[' + dp[idx / 5] + ']';
		for (int i = 1; i <= idx; i++) {
			if (check(dp[idx], dp[idx - i] + dp[i]))dp[idx] = dp[idx - i] + dp[i];
		}
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << dp[n] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}