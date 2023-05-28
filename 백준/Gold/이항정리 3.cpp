#include <iostream>

#define endl "\n"
using namespace std;

long long N, K, A, B, half;
long long mod = 1000000007;

long long solve(int x)
{
	if (x == 0) return 1;

	if (x % 2 == 1) return B * solve(x - 1) % mod;
	else
	{
		half = solve(x / 2);
		return half * half % mod;
	}
}

void Input()
{
	cin >> N >> K;
	A = 1;
	// A = N*(N-1)* .... *(N-K+1)
	for (int i = N; i >= N - K + 1; i--) A = (A * i) % mod;

	// B = K!
	B = 1;
	for (int i = 1; i <= K; i++) B = (B * i) % mod;

	// B = (K!)^(p-2)
	B = solve(mod - 2);

	cout << A * B % mod;
}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}
