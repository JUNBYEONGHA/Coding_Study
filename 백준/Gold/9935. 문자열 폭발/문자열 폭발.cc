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
	string s, boom;
	cin >> s >> boom;
	string temp = "";
	for (int i = 0; i < s.size() ; i++)
	{
		temp += s[i];
		if (temp.back() == boom.back())
		{
			bool check = true;
			if (temp.size() < boom.size()) continue;
			for (int j = 0; j < boom.size() ; j++)
			{
				if (temp[temp.size() - boom.size() + j] != boom[j]) 
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				for (int j = 0; j < boom.size(); j++)
				{
					temp.pop_back();
				}
			}
		}
	}
	if (temp.empty()) cout << "FRULA";
	else cout << temp;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}