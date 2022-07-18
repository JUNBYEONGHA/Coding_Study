#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'X')
		{
			count++;
		}
		else if (s[i] == '.')
		{
			if (count % 2 == 1)
			{
				cout << -1;
				return;
			}
			else if (count == 2)
			{
				s[i - 2] = 'B';
				s[i - 1] = 'B';
				count = 0;
			}
		}
		if (count == 4)
		{
			s[i - 3] = 'A';
			s[i - 2] = 'A';
			s[i - 1] = 'A';
			s[i] = 'A';
			count = 0;
		}
	}
	if (count % 2 == 1)
	{
		cout << -1;
		return;
	}
	else if (count == 2)
	{
		s[s.size() - 2] = 'B';
		s[s.size() - 1] = 'B';
	}
	cout << s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}