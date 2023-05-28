#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N,K;

void Answer()
{
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	cin >> K;
	sort(arr.begin(), arr.end());
	int l = 0, r = N - 1, cnt = 0;
	while (true)
	{
		if (l >= r)
			break;
		int sum = arr[l] + arr[r];
		if (sum == K)
		{
			cnt++;
			l++;
			r--;
		}
		else if (sum < K)
			l++;
		else
			r--;
	}
	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}