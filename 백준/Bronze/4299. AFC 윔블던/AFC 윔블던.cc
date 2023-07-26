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
	int a, b;
	cin >> a >> b;

	if (a < b) {
		cout << -1 << endl;
		return;
	}

	int n = (a + b) / 2;
	int m = (a - b) / 2;

	if ((n + m != a) || n - m != b) cout << -1 << endl;
	else cout << n << ' ' << m << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}