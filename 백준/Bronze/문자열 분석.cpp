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
	while (getline(cin , s))
	{
		int a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				a++;
			}
			else if (s[i] >= 65 && s[i] <= 90)
			{
				b++;
			}
			else if (s[i] >= 48 && s[i] <= 57)
			{
				c++;
			}
			else if (s[i] == ' ')
			{
				d++;
			}
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}