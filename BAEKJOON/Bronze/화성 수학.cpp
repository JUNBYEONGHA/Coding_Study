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

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
    double n, t;
    string x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        getline(cin, x);
        for (int i = 0; i < x.size(); i++)
            switch (x[i])
            {
            case '@':
                n *= 3;
                break;
            case '#':
                n -= 7;
                break;
            case '%':
                n += 5;
                break;
            }
        cout.precision(2);
        cout << fixed;
        cout << n << endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}