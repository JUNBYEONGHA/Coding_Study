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
	cin >> lastNumber; // ������ ���� ��ǥ ��

	dp[0][arr[0]] = 1; // ó���� ���� �⺻ ��

	for (int i = 1; i < N - 1; i++) // N ���� ������ ���� ������ ����
	{
		for (int j = 0; j < 21 ; j++)
		{
			if (dp[i - 1][j] == 0) continue; // ���� ������ �ѱ��

			if (j + arr[i] <= 20) // + ���� ��� 20�� �� ������ ����� �� ���ϱ�
			{
				dp[i][j + arr[i]] += dp[i - 1][j];
			}
			if (j - arr[i] >= 0) // - ���� ��� 0 ���� ū ����� �� ���ϱ�
			{
				dp[i][j - arr[i]] += dp[i - 1][j];
			}
		}
	}
	cout << dp[N - 2][lastNumber]; // ��ǥ �� �� ����� �� ���
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}