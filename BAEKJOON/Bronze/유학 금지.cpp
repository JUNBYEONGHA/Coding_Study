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
	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case 'C': case 'A': 
		case 'M': case 'B':
		case 'R': case 'I':
		case 'D': case 'G':
		case 'E': 
			break;
		default:
			cout << s[i];
			break;
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