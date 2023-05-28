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

#define endl "\n"
using LL = long long;
using namespace std;


void Answer()
{

    int n;
    LL m;
    cin >> n >> m;

    vector<int> ve(n);
    for (auto& i : ve) {
        cin >> i;
    }

    LL ans = 0;
    for (int bit = 1; bit < (1 << n); ++bit) {
        int count = 0;
        LL value = 1L;

        for (int p = 0; p < n; ++p) {
            if (bit & (1 << p)) {
                count++;
                value *= ve[p];
            }
        }

        if (count % 2) {
            ans += m / value;
        }
        else {
            ans -= m / value;
        }
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