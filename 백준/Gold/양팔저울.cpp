#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int n, bead, x, weight[31];
bool dp[31][15001];

void solve(int i, int w)
{
	if (i > n || dp[i][w]) return;
	dp[i][w] = true;
	solve(i + 1, w + weight[i]);
	solve(i + 1, abs(w - weight[i]));
	solve(i + 1, w);
}

void Answer()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}
	solve(0, 0);

	cin >> bead;

	for (int i = 0; i < bead; i++)
	{
		cin >> x;

		if (x > 15000) cout << "N ";
		else if (dp[n][x]) cout << "Y ";
		else cout << "N ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}