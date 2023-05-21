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

void Answer()
{
	int n; cin >> n; int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		char c; cin >> c;
		if (c == 'A') a++;
		else b++;
	}
	if (a > b) cout << 'A';
	else if (a == b) cout << "Tie";
	else cout << 'B';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

