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
	while (cin >> s)
	{
		if (s == "end") break;
		bool check = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
				|| s[i] == 'o' || s[i] == 'u')
			{
				check = true;
				break;
			}
		}
		int C = 0 , V = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
				|| s[i] == 'o' || s[i] == 'u')
			{
				C++;
				V = 0;
			}
			else
			{
				V++;
				C = 0;
			}
			if (C == 3 || V == 3)
			{
				check = false;
				break;
			}
		}
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == 'e' || s[i] == 'o') continue;
			else
			{
				if (s[i] == s[i - 1])
				{
					check = false;
					break;
				}
			}
		}
		if (check) cout << "<" << s << "> is acceptable." << endl;
		else cout << "<" << s << "> is not acceptable." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}