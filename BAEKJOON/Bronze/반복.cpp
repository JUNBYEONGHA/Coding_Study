#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int result = 1;
	string s;
	cin >> s;
	char c;
	c = s[0];
	for (int i = 1; i < s.size(); i++)
	{
		if (c >= s[i])
		{
			result++;
		}
		c = s[i];
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