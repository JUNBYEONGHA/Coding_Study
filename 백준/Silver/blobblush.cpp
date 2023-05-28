#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	long long N; cin >> N;
	long long  M = 1;
	while (M < N) M = M * 2 + 1;
	if (M == N) cout << 1 << endl << N;
	else cout << 2 << endl << (M ^ N) << endl << N;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}