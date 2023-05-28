#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	for (int j = 0; j < t; j++)
	{
		vector<int> arr;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		cout << "Class " << j + 1 << endl;
		int a = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int temp = arr[i + 1] - arr[i];
			a = max(a, temp);
		}
		cout << "Max " << arr[n - 1] << ", Min " << arr[0] << ", Largest gap " << a << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}