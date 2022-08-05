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
		s[i] = toupper(s[i]);
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