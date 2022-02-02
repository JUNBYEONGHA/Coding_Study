#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define endl "\n"
using namespace std;

int k, n;
long long input[10000];
long long result = 0;

int cnt(int len) {
	int count = 0;
	for (int i = 0; i < k; i++) {
		count += input[i] / len;
	}
	return count;
}

void biSearch(long long start, long long end) {
	if (start >= end) {
		return;
	}
	long long mid = (start + end) / 2;
	int count = cnt(mid);
	if (count < n) {
		biSearch(start, mid);
	}
	else {
		result = max(result, mid);
		biSearch(mid + 1, end);
	}
}

void Answer()
{
	cin >> k >> n;
	long long maxLen = 0;
	for (int i = 0; i < k; i++) {
		cin >> input[i];
		maxLen = max(maxLen, input[i]);
	}
	biSearch(1, maxLen + 1);
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}