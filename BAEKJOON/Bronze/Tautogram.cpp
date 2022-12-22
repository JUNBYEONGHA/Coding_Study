#include <iostream>
#include <string>
#define endl "\n"
using namespace std;


void Answer()
{
	string s;
	while (true)
	{
		getline(cin, s);
		if (s[0] == '*') break;

		char letter = tolower(s[0]);
		bool isTautogram = true;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				if (tolower(s[i + 1]) != letter)
				{
					isTautogram = false;
				}
			}
		}
		if (isTautogram)
		{
			cout << "Y" << endl;
		}
		else
		{
			cout << "N" << endl;
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