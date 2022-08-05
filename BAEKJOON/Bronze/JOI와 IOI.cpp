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
	cin >> s;
	int a = 0, b = 0;
	for (int i = 0; i < s.size() - 2; i++)
	{
		if (s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I')
		{
			a++;
		}
		else if(s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I')
		{
			b++;
		}
	}
	cout << a << endl << b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}