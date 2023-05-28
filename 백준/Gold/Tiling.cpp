#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MOD 1000000007
int N;
long long DP[1001];


void Answer()
{
	cin >> N;
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
		DP[i] = (DP[i - 2] * 3) % MOD;
		for (int j = i - 4; j >= 0; j = j - 2)
		{
			DP[i] += (DP[j] * 2) % MOD;
			DP[i] %= MOD;
		}
	}
	cout << DP[N] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}