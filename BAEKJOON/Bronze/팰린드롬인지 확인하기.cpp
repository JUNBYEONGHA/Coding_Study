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
	string s;
	cin >> s;
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[s.size() - 1 - i])
		{
			cout << "0";
			return;
		}
	}
	cout << "1";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

