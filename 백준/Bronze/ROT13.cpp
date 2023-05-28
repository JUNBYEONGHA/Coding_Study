#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'A' + 12) || (s[i] >= 'a' && s[i] <= 'a' + 12))
			cout << (char)(s[i] + 13);
		else if ((s[i] >= '0' && s[i] <= '9') || s[i] == ' ')
			cout << s[i];
		else
			cout << (char)(s[i] - 13);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}