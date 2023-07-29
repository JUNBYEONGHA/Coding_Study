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

LL s[18] = { 0,0,0,0,0,0,0,0,0,0
				,3628800
				,39916800
				,479001600
				,6227020800
				,87178291200
				,1307674368000
				,20922789888000
				,355687428096000 };

void Answer()
{
	int N;
	cin >> N;
	cout << s[N] /( 7 * 24 * 60 * 60 );
}
int main()
{
	//os_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}