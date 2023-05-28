#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int chp, cmp, cat, cdp;
		int nhp, nmp, nat, ndp;
		cin >> chp >> cmp >> cat >> cdp;
		cin >> nhp >> nmp >> nat >> ndp;
		cout << 1 * max(1, (chp + nhp) )+
			5 * max ( 1 ,(cmp + nmp) )+
			2 * max ( 0, (cat + nat) )+
			2 * (cdp + ndp) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}