#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, M, K = 0;
	cin >> N >> M;
	K = M * (M + 1) / 2;
	if (N < K) cout << -1;
	else
	{
		N -= K;
		N %= M;
		if (N == 0) cout << M - 1;
		else cout << M;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}