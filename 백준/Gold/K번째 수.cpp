#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define endl "\n"
using namespace std;

long long n, k;

long long p(long long value) {
	long long sum = 0;
	for (long long i = 1; i < n + 1; i++)
	{
		sum += min(n, value / i);
	}
	return sum;
}

void Answer()
{
	cin >> n >> k;
	long long first = 1;
	long long end = n * n;
	long long ret;
	while (first <= end)
	{
		long long mid = (first + end) / 2;
		if (p(mid) < k)
		{
			first = mid + 1;
		}
		else
		{
			ret = mid;
			end = mid - 1;
		}
	}
	cout << ret << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}