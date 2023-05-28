#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		int alpha[128] = {0,};
		for (int i = 0; i < s.size(); i++)
		{
			alpha[s[i]]++;
		}
		int result = 0;
		int g = alpha[71] + alpha[103], b = alpha[66] + alpha[98];
		cout <<	s << " is ";
		if (g > b) cout << "GOOD" << endl;
		else if (g < b) cout << "A BADDY" << endl;
		else cout << "NEUTRAL" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}