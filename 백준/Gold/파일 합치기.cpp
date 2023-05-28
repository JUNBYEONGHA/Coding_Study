#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int INF = 1000000007;

int dp[501][501];
int cost[501];
int sum[501];
int T, K, i;


void Answer()
{
    cin >> T;
    while (T--) {
        cin >> K;
        for (i = 1; i <= K; ++i) {
            cin >> cost[i];
            sum[i] = sum[i - 1] + cost[i];
        }

        for (int d = 1; d < K; ++d) {
            for (int tx = 1; tx + d <= K; ++tx) {
                int ty = tx + d;
                dp[tx][ty] = INF;

                for (int mid = tx; mid < ty; ++mid)
                    dp[tx][ty] =
                    min(dp[tx][ty], dp[tx][mid] + dp[mid + 1][ty] + sum[ty] - sum[tx - 1]);
            }
        }

        cout << dp[1][K] << endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}