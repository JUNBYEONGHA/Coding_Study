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
	int n; cin >> n;
	int win = 0;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		bool hasCD = false;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'C' && s[j + 1] == 'D')
			{
				hasCD = true;
				break;
			}
		}
		if (!hasCD) win++;
	}
	cout << win;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}