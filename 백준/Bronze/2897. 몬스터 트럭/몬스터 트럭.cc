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

string s[51];
int result[5];

void Answer()
{
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
        cin >> s[i];
    for (int i = 0; i < R - 1; i++)
    {
        for (int j = 0; j < C - 1; j++)
        {
            int temp = 0;
            if (s[i][j] == '#' || s[i][j + 1] == '#' || s[i + 1][j] == '#' || s[i + 1][j + 1] == '#')
                continue;
            if (s[i][j] == 'X')
                temp++;
            if (s[i + 1][j] == 'X')
                temp++;
            if (s[i][j + 1] == 'X')
                temp++;
            if (s[i + 1][j + 1] == 'X')
                temp++;
            result[temp]++;
        }
    }
    for (int i = 0; i < 5; i++)
        cout << result[i] << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}