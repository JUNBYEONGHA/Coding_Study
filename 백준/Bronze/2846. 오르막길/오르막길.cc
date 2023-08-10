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
    int n;
    int p[1001];
    int ans = 0;
    int l = 1, r = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n - 1; i++)
    {
        if (p[i] < p[i + 1])
        {
            r++;
            ans = max(ans, p[r] - p[l]);
        }
        else if (p[i] >= p[i + 1])
        {
            l = i + 1;
            r = i + 1;
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