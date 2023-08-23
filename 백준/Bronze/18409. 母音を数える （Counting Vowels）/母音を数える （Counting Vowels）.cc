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
	int n; string s;
	cin >> n >> s;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'a' ||
			s[i] == 'i' || s[i] == 'u' ||
			s[i] == 'e' || s[i] == 'o')
		{
			result++;
		}
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}