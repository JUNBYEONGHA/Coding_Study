#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 100001

int N;
int DP[MAX][3];

void Input()
{
	cin >> N;
	DP[0][0] = DP[0][1] = DP[0][2] = 1;
}
void Solution()
{
	for (int i = 1; i < N; i++) {
		DP[i][0] = (DP[i - 1][0] + DP[i - 1][1] + DP[i - 1][2]) % 9901;
		DP[i][1] = (DP[i - 1][0] + DP[i - 1][2]) % 9901;
		DP[i][2] = (DP[i - 1][0] + DP[i - 1][1]) % 9901;
	}
	int result = (DP[N - 1][0] + DP[N - 1][1] + DP[N - 1][2]) % 9901;
	cout << result;
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