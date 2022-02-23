#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int Time[16];
int Money[16];
int DP[16];

void Answer()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> Time[i] >> Money[i];
	}
	int deadline;
	for (int i = N; i > 0; i--)
	{
		deadline = i + Time[i];
		if (deadline > N + 1)
			DP[i] = DP[i + 1];
		else
			DP[i] = max(DP[i + 1], DP[deadline] + Money[i]);
	}
	cout << DP[1];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}