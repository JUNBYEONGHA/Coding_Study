#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MOD 1000000007
void Answer()
{
	long long N;
	cin >> N;
	long long A = 0;
	long long B = 1;

	for (long long i = 1; i <= N; i++)
	{
		A = (A + ((i * i) % MOD * (i + 1)) % MOD) % MOD;
	}
	for (long long i = 2; i <= N; i++)
	{
		B = (((B * i) % MOD) * i) % MOD;
	}
	cout << A << " " << B;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}