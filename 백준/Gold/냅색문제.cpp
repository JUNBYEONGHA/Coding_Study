#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;

long long N, C, W[31], ans;
vector<long long> group1;
vector<long long> group2;

void dfs(int s, int e, vector<long long>& v, long long sum)
{
	if (s > e)
	{
		v.push_back(sum);
		return;
	}
	else
	{
		dfs(s + 1, e, v, sum);
		dfs(s + 1, e, v, sum + W[s]);
	}
}


void Answer()
{
	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		cin >> W[i];
	}
	dfs(0, N / 2, group1, 0);
	dfs(N / 2 + 1, N - 1, group2, 0);
	sort(group2.begin(), group2.end());


	for (int i = 0; i < group1.size(); i++)
	{
		ans += upper_bound(group2.begin(), group2.end(), C - group1[i]) - group2.begin();
	}

	cout << ans << endl;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}