#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int N, cnt;
int arr[1000001], dp[1000001];
vector<int> v, ans;

void Answer()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	v.push_back(arr[1]);
	
	for (int i = 2; i <= N ; i++)
	{
		if (v[cnt] < arr[i])
		{
			v.push_back(arr[i]);
			cnt++;
			dp[i] = cnt;
		}
		else
		{
			int pos = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
			v[pos] = arr[i];
			dp[i] = pos;
		}
	}
	int LIS_size = cnt;
	for (int i = N; i >= 0; i--)
	{
		if (dp[i] == LIS_size)
		{
			ans.push_back(arr[i]);
			LIS_size--;
		}
	}
	cout << ans.size() << endl;
	reverse(ans.begin(), ans.end());
	for (auto a : ans)
	{
		cout << a << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}