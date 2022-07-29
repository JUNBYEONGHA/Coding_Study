#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	vector<int>arr(n + 1);
	vector<int>cnt(n + 1, 0);
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int now = 1; now <= n; now++) {
		double maxx = -9999999999;
		for (int i = now + 1; i <= n; i++) {
			double level = (double)(arr[i] - arr[now]) / (i - now);
			if (level > maxx) {
				cnt[now]++;
				cnt[i]++;
				maxx = level;
			}
		}
	}
	int res = 0;
	for (int i = 1; i <= n; i++)
		res = max(res, cnt[i]);
	cout << res;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}