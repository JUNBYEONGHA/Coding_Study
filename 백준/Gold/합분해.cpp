#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 201

int N, K;
long long DP[MAX][MAX];

void Input()
{
	cin >> N >> K;
}
void Solution()
{
	for (int i = 0; i <= N; i++)
	{
		DP[1][i] = 1;
	}
	for (int k = 2; k <= K; k++)
	{
		for (int n = 0; n <= N; n++)
		{
			for (int i = 0; i <= n; i++)
			{
				DP[k][n] = DP[k][n] + DP[k - 1][i];
			}
			DP[k][n] = DP[k][n] % 1000000000;
		}
	}
	cout << DP[K][N];
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