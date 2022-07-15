#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

char Up(char a)
{
	if (a >= 97 && a <= 122)
		a -= 32;
	return a;
}

void Answer()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		s[0] = Up(s[0]);
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