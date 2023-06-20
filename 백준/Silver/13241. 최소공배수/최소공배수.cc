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

LL GCD(LL a, LL b)
{
	return b == 0 ? a : GCD(b, a % b);
}

void Answer()
{
	LL A, B;
	cin >> A >> B;
	LL gcd = GCD(A, B);
	cout << A * B / gcd;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}