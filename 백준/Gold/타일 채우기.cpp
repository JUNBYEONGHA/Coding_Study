#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 35
#define MOD 1000000007

int N;
int DP[MAX];

void Input()
{
	cin >> N;
}
void Solution()
{
	if (N % 2 == 1)
	{
		cout << 0 << endl;
		return;
	}
	DP[0] = 1;
	DP[1] = 0;
	DP[2] = 3;
	for (int i = 4; i <= N; i = i + 2)
	{
		DP[i] = DP[i - 2] * DP[2];
		for (int j = i - 4; j >= 0; j = j - 2)
		{
			DP[i] = (DP[i] + (DP[j] * 2));
		}
	}
	cout << DP[N] << endl;
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