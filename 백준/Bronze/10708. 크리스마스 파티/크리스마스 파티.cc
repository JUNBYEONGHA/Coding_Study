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

int a[101], b[101], ans[101];

void Answer()
{
    int m, n, target = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++)
    {
        target = a[i];
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> b[j];
        }
        for (int j = 1; j <= n; j++)
        {
            if (target == b[j])
            {
                ans[j]++;
            }
            else
                cnt++;
        }
        ans[a[i]] += cnt;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << '\n';
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}