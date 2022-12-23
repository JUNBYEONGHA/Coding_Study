#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int n, ans;
void dfs(int sum) {
	if (sum > n) return;
	dfs(sum * 10 + 7);
	dfs(sum * 10 + 4);
	ans = max(ans, sum);
}

void Answer()
{
	cin >> n;
	dfs(0);
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}