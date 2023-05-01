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

int l, r;
void Answer()
{
	cin >> l >> r;
	if (l != r) cout << "Odd " << max(l, r) * 2;
	else if (!l && !r) cout << "Not a moose";
	else cout << "Even " << l * 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}