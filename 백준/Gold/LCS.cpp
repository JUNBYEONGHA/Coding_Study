#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

string A, B;
int dp[1001][1001];

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	int a = A.size();
	int b = B.size();
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (A[i - 1] == B[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);	
		}
	}
	cout << dp[a][b];
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}