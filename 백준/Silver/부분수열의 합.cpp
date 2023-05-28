#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

void Answer()
{
	int n, s, ans = 0;
	cin >> n >> s;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 1; i < (1 << n); i++)
	{
		int sum = 0;
		for (int k = 0; k < n; k++)
		{
			if (i & (1 << k))
			{
				sum += v[k];
			}
		}
		if (sum == s) ans++;
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}