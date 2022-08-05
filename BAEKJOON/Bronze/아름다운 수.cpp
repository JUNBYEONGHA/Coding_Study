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
		int dp[10];
		for (int i = 0; i < 10; i++)
		{
			dp[i] = 0;
		}
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			dp[s[i] - '0']++;
		}
		int count = 0;
		for (int i = 0; i < 10; i++)
		{
			if (dp[i]) count++;
		}
		cout << count << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}