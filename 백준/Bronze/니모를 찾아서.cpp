#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	while (true)
	{
		getline(cin, s);
		if (s.compare("EOI") == 0) break;
		bool check = true;

		for (int i = 0; i < s.size(); i++)
		{
			s[i] = toupper(s[i]);
		}

		for (int j = 0; j < s.size() - 3; j++)
		{
			if (s[j] == 'N' && s[j + 1] == 'E' && s[j + 2] == 'M' && s[j + 3] == 'O')
			{
				cout << "Found" << endl;
				check = false;
				break;
			}
		}
		if (check)
		{
			cout << "Missing" << endl;
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