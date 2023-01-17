#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int arr[1001] = { 0, }, k = 1, a, b, sum = 0;
	cin >> a >> b;
	for (int i = 1; i <= 1000;)
	{
		for (int j = 1; j <= k && i <= 1000; j++)
			arr[i++] = k;
		k++;
	}
	for (int i = a; i <= b; i++)
		sum += arr[i];
	cout << sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}