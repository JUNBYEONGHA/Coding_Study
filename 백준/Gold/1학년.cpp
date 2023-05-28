#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int arr[101];
long long dp[101][21];

void Answer()
{
	int N , lastNumber;
	cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> arr[i];
	}
	cin >> lastNumber; // 마지막 수는 목표 수

	dp[0][arr[0]] = 1; // 처음에 들어가는 기본 수

	for (int i = 1; i < N - 1; i++) // N 에서 마지막 수를 제외한 길이
	{
		for (int j = 0; j < 21 ; j++)
		{
			if (dp[i - 1][j] == 0) continue; // 값이 없으면 넘기기

			if (j + arr[i] <= 20) // + 했을 경우 20이 안 넘으면 경우의 수 더하기
			{
				dp[i][j + arr[i]] += dp[i - 1][j];
			}
			if (j - arr[i] >= 0) // - 했을 경우 0 보다 큰 경우의 수 더하기
			{
				dp[i][j - arr[i]] += dp[i - 1][j];
			}
		}
	}
	cout << dp[N - 2][lastNumber]; // 목표 수 의 경우의 수 출력
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}