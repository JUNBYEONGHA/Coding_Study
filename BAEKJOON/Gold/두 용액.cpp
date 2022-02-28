#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N,K = 2100000000;

void Answer()
{
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int l = 0, r = N - 1 , a = 0 , b = 0;
	while (l < r)
	{
		int sum = arr[l] + arr[r];
		if (K > abs(sum))
		{
			a = arr[l];
			b = arr[r];
			K = abs(sum);
			if (K == 0)
				break;
		}
		if (sum < 0)
			l++;
		else
			r--;
	}
	cout << a << " " << b;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}