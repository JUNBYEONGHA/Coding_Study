#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s, alpha;
		getline(cin, s);
		getline(cin, alpha);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z' )
			{
				s[i] = alpha[s[i] - 'A'];
			}
		}
		cout << s << endl;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}