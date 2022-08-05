#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	cin.get();
	while (n--)
	{
		string s;
		getline(cin, s);
		int a = 0, b = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ') continue;
			switch (s[i])
			{
			case 'a': case 'A':
			case 'e': case 'E':
			case 'i': case 'I':
			case 'o': case 'O':
			case 'u': case 'U':
				b++;
				break;
			default:
				a++;
				break;
			}
		}
		cout << a << " " << b << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}