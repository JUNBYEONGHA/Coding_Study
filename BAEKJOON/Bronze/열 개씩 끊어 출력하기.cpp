#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	cin >> s;
	for (int i = 1; i <= s.size(); i++)
	{
		cout << s[i - 1];
		if (i % 10 == 0) cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}