#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	string result = "";
	cin >> s;
	result += s[0];
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-')
			result += s[i + 1];
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
