#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N, K;

void Answer()
{
	cin >> N >> K;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int l = 0, r = 0, cnt = 100001, sum = 0;
	while (l <= r)
	{
		if (sum >= K)
		{
			cnt = min(cnt, r - l);
			sum -= arr[l++];
		}
		else if (r == N) break;
		else sum += arr[r++];
	}
	if (cnt == 100001)
		cout << 0 << endl;
	else
		cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}