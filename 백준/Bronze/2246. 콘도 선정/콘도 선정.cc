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

using pii = pair<int, int>;

int n, ans, can, xd, xc, d, c;
vector <pii> v;

void Answer()
{
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    for (int i = 0; i < n; i++) {
        can = 1;
        xd = v[i].first;
        xc = v[i].second;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            d = v[j].first;
            c = v[j].second;
            if (xd >= d && xc >= c) { can = 0; break; }
            if (xc >= c && xd >= d) { can = 0; break; }
        }
        if (can) ans++;
    }
    cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}