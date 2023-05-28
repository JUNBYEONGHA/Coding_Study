#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

#define MAX 1000001
int num;
int arr[MAX];
int dp[MAX];

void Input()
{
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}
}
void Solution()
{
	int maxsum = dp[0];
	for (int i = 1; i < num; i++)
	{
		dp[i] = max(dp[i], dp[i - 1] + arr[i]);
		if (dp[i] > maxsum)
				maxsum = dp[i];
	}
	cout << maxsum;
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