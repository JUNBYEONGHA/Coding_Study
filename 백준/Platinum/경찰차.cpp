#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

struct xy
{
	int x;
	int y;
};

int dp[1010][1010];
xy police[1010];
int N, W;

int find_dist(xy a, xy b)
{
	return abs(a.x - b.x) + abs(a.y - b.y);
}
int total_dist(int police1,int police2)
{
	if (police1 == W || police2 == W) return 0;
	if (dp[police1][police2] != -1) return dp[police1][police2];

	int next_police = max(police1, police2) + 1;
	int dist1, dist2;

	if (police1 == 0) dist1 = find_dist({ 1,1 }, police[next_police]);
	else dist1 = find_dist(police[police1], police[next_police]);

	if (police2 == 0) dist2 = find_dist({ N,N }, police[next_police]);
	else dist2 = find_dist(police[police2], police[next_police]);

	int result1 = dist1 + total_dist(next_police, police2);
	int result2 = dist2 + total_dist(police1, next_police);

	dp[police1][police2] = min(result1, result2);
	return dp[police1][police2];
}
void total_Route(int police1, int police2)
{
	if (police1 == W || police2 == W) return;

	int next_police = max(police1, police2) + 1;
	int dist1, dist2;

	if (police1 == 0) dist1 = find_dist({ 1,1 }, police[next_police]);
	else dist1 = find_dist(police[police1], police[next_police]);

	if (police2 == 0) dist2 = find_dist({ N,N }, police[next_police]);
	else dist2 = find_dist(police[police2], police[next_police]);

	if (dp[next_police][police2] + dist1 < dp[police1][next_police] + dist2)
	{
		cout << 1 << endl;
		total_Route(next_police, police2);
	}
	else
	{
		cout << 2 << endl;
		total_Route(police1, next_police);
	}
}

void Answer()
{
	cin >> N >> W;
	for (int i = 1; i <= W; i++)
	{
		int a, b;
		cin >> a >> b;
		police[i].x = a;
		police[i].y = b;
	}
	memset(dp, -1, sizeof(dp));
	cout << total_dist(0, 0) << endl;
	total_Route(0, 0);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}