#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

const int IMPOSSIBLE = 1987654321;
int N, W[16][16];
int dp[16][1 << 16];

int TSP(int current, int visited) {
	int& ret = dp[current][visited];
	if (ret != -1)
		return ret;
	if (visited == (1 << N) - 1) {
		if (W[current][0] != 0)
			return W[current][0];
		return IMPOSSIBLE;
	}
	ret = IMPOSSIBLE;
	for (int i = 0; i < N; ++i) {
		if (visited & (1 << i) || W[current][i] == 0)
			continue;
		ret = min(ret, TSP(i, visited | (1 << i)) + W[current][i]);
	}
	return ret;
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			cin >> W[i][j];
	}
	memset(dp, -1, sizeof(dp));
	cout << TSP(0, 1);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}