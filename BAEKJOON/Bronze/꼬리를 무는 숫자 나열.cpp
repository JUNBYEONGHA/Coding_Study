#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

const int MOD = 4;

void Answer()
{
	int a, b;
	cin >> a >> b;

	a--, b--;

	int aX = a / MOD, aY = a % MOD;
	int bX = b / MOD, bY = b % MOD;

	int result = abs(aX - bX) + abs(aY - bY);

	cout << result;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}