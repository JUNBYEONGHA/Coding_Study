#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int DP[1000001] = {1,2};
int N;


void Input()
{
	cin >> N;
}
void Solution()
{
	for (int i = 2; i < N; i++)
	{
		DP[i] = (DP[i - 1] + DP[i - 2]) % 15746;
	}
	cout << DP[N - 1];
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