#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = (a * (s[i] - 'A') + b) % 26 + 65;
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