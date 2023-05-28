#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
string A;
int DP[10];
void Input()
{
	cin >> A;
}
void Solution()
{
	for (register int i = 0; i < A.size(); i++)
	{
		DP[A[i] - '0']++;
	}
	for (int i = 9; i >= 0; i--)
	{
		while (DP[i]--)
		{
			cout << i;
		}
	}
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