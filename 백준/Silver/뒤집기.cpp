#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	int one = 0, zero = 0 ,result = 0;
	cin >> s;
	int c = s[0];
	for (int i = 1; i < s.size(); i++)
	{
		if (c != s[i])
		{
			if (c == '0')
			{
				one++;
			}
			else
			{
				zero++;
			}
			c = s[i];
		}
	}
	if (c == '0')
	{
		one++;
	}
	else
	{
		zero++;
	}
	result = min(one, zero);
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}