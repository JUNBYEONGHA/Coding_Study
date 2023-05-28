#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int dp[26];

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 26; i++)
		{
			dp[i] = 0;
		}
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			dp[s[i] - 'A']++;
		}
		int temp = 0;
		for (int i = 0; i < 26; i++)
		{
			if (dp[i] == 0)
			{
				temp += (i + 65);
			}
		}
		cout << temp << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}