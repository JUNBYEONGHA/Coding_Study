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
		string s; cin >> s;
		if ((s[s.size() - 1] - '0') % 2 == 0) cout << "even" << endl;
		else cout << "odd" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}