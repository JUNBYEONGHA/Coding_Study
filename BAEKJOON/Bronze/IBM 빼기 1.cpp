#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	for (int j = 1; j <= t; j++)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			s[i] += 1;
			if (s[i] > 'Z') s[i] = 'A';
		}
		cout << "String #" << j << endl;
		cout << s << endl << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}