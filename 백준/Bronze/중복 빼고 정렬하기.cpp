#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int dp[100001];

void Answer()
{
	int n;
	vector<int> arr;

	cin >> n;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (auto a : arr)
	{
		cout << a << " ";
	}

	cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}