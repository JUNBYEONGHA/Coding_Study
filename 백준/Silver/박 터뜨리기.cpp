#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, SUM = 0, K;
	cin >> N >> K;
	SUM = K * (K + 1) / 2;
	if (N < SUM) cout << -1;
	else
	{
		N -= SUM;
		N %= K;
		if (N == 0) cout << K - 1;
		else cout << K;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}