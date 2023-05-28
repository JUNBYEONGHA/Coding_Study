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
		string s;
		cin >> s;
		if (s[s.size() / 2 - 1] == s[s.size() / 2])
		{
			cout << "Do-it" << endl;
		}
		else
		{
			cout << "Do-it-Not" << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}