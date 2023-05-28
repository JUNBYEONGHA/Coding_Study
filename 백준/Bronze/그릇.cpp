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
    string k;
    int sum = 10;
    cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if ((k[i] == ')' && k[i + 1] == '(')
            || (k[i] == '(' && k[i + 1] == ')')
            && i + 1 < k.size())
        {
            sum += 10;
        }
        else if ((k[i] == ')' && k[i + 1] == ')')
            || (k[i] == '(' && k[i + 1] == '(')
            && i + 1 < k.size())
        {
            sum += 5;
        }
    }
    cout << sum ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}