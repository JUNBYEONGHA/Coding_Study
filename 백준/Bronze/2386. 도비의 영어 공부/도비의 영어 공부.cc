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
    char ch;
    string str;

    while (1) {
        cin >> ch;
        getline(cin, str);

        if (ch == '#') {
            break;
        }

        int len = str.length();

        int cnt = 0;

        for (int i = 0; i < len; i++) {
            if (str[i] == ch || str[i] == toupper(ch)) { // keypoint
                cnt++;
            }
        }
        cout << ch << " " << cnt << endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}