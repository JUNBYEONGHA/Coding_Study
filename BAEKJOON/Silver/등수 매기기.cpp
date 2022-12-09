#include<iostream>
#include<vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	long long total = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		total += abs((i + 1) - arr[i]);
	}
	cout << total;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}