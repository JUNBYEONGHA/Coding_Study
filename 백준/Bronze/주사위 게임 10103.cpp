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
	int n;
	cin >> n;
	int A = 100, B = 100;
	for (int i = 0; i < n; i++)
	{
		int a, b; cin >> a >> b;
		if (a > b) B -= a;
		else if (a < b) A -= b;
	}
	cout << A << endl << B;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

