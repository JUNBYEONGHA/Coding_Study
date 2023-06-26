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
	int N; cin >> N;
	set<string> comcom;
	int result = 0;
	while (N--)
	{
		string s; cin >> s;
		if (s.compare("ENTER") == 0)
		{
			result += comcom.size();
			comcom.clear();
		}
		else
		{
			comcom.insert(s);
		}
	}
	result += comcom.size();
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}