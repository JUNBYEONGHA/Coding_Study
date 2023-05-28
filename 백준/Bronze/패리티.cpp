#include <iostream>

#define endl "\n"
using namespace std;	

void Answer()
{
	string s;
	while (true)
	{
		cin >> s;
		if (s.compare("#") == 0)
		{
			break;
		}
		int one = 0;
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] == '1') one++;
		}
		if (s[s.size() - 1] == 'e')
		{
			if (one % 2 == 0)
			{
				s[s.size() - 1] = '0';
			}
			else
			{
				s[s.size() - 1] = '1';
			}
		}
		else
		{
			if (one % 2 == 1)
			{
				s[s.size() - 1] = '0';
			}
			else
			{
				s[s.size() - 1] = '1';
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