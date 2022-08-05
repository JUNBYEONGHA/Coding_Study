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
	for (int i = 0; i < 3; i++)
	{
		cin >> s;
		char c = s[0];
		int count = 1 , answer = 1;
		for (int j = 1; j < s.size(); j++)
		{
			if (c == s[j])
			{
				count++;
				answer = max(answer, count);
			}
			else
			{
				c = s[j];
				count = 1;
			}
		}
		cout << answer << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}