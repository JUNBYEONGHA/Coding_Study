#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		string p, s;
		cin >> p >> s;
		int second = p.size();
		while (p.find(s) != string::npos)
		{
			p = p.substr(p.find(s) + s.size());
			second -= (s.size() - 1);
		}
		cout << second << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}