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
    LL n, l, w, h;
    double left = 0, right = 1000000000, mid;
    cin >> n >> l >> w >> h;
    for (int i = 0; i < 10000; i++) {
        mid = (left + right) / 2;
        if (((LL)(l / mid)) * ((LL)(w / mid)) * ((LL)(h / mid)) < n) right = mid;
        else left = mid;
    }
    cin >> fixed;
    cout.precision(10);
    cout << left;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}