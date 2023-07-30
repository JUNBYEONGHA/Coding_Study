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
    cin >> n;
    if (n <= 5) cout << n;
    else
    {
        if ((n - 5) / 4 % 2 == 0)
            cout << 5 - (n - 5) % 4;
        else
            cout << 1 + (n - 5) % 4;
    }
}
int main()
{
	//os_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}