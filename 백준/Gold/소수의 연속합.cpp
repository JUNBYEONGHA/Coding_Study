#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;


void Answer()
{
	cin >> N;
	vector<bool> prime(N + 1, 1);
	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == 0) continue;
		for (int j = i + i; j <= N; j += i) {
			prime[j] = false;
		}
	}
	vector<int> arr;
	for (int i = 2; i <= N; i++)
	{
		if (prime[i])
			arr.push_back(i);
	}
	int l = 0, r = 0, cnt = 0, sum = 0;
	while (l <= r)
	{
		if (sum == N)
			cnt++;
		if (sum >= N)
			sum -= arr[l++];
		else if (r == arr.size())
			break;
		else
			sum += arr[r++];
	}
	cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}