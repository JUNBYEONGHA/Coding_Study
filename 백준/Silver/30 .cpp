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
	string s; cin >> s;
	sort(s.begin(), s.end() , greater<int>());
	if (s[s.length() - 1] != '0')
	{
		cout << "-1";
	}
	else
	{
		LL sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			sum += s[i] - '0';
		}
		if (sum % 3 == 0)
			cout << s;
		else
			cout << -1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}