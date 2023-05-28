#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

int query[1000001];

void Answer()
{
	int N, Q;
	cin >> N >> Q;
	for (int i = 1; i <= N; i++)
	{
		cin >> query[i];
		query[i] ^= query[i - 1];
	}
	int s, e, result = 0;
	for (int i = 0; i < Q; i++)
	{
		cin >> s >> e;
		result ^= (query[e] ^ query[s - 1]);
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}