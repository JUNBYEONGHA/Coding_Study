#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>

#define endl "\n"
using namespace std;
#define MAX 1000001
long long dp[MAX], s[MAX];

void Answer()
{
	fill_n(dp, MAX, 1);
	for (int i = 2; i < MAX; i++)
	{
		for (int j = 1; i * j < MAX; j++)
		{
			dp[i * j] += i;
		}
	}
	for (int i = 1; i < MAX; i++)
	{
		s[i] = s[i - 1] + dp[i];
	}
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		cout << s[n] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}