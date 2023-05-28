#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

int arr[3];
void Answer()
{
	int N; cin >> N;
	int result = 0;
	while (N--)
	{
		int temp = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);
		if (arr[0] == arr[1] && arr[1] == arr[2])
		{
			temp = 10000 + arr[0] * 1000;
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2])
		{
			temp = 1000 + arr[1] * 100;
		}
		else
		{
			temp = arr[2] * 100;
		}
		result = max(result, temp);
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}