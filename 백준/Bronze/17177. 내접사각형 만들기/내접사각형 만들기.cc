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
	int a, b, c;
	cin >> a >> b >> c;

	int p, q, r;
	p = a;
	q = 2 * b * c;
	r = a * (c * c - a * a + b * b);

	int d = q * q - 4 * p * r;
	if (d < 0)
	{
		cout << -1;
		return;
	}
	double x;
	x = (-q + sqrt(d)) / (2 * p);
	if (x < 0)
	{
		cout << -1;
		return;
	}
	cout << (int)(x + 1e-5);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}