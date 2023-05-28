#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	int arr[3] = { 0, }, minnum;
	int i, j;
	cin >> arr[0];
	minnum = arr[0];
	for (i = 1; i < n; i++)
	{
		cin >> arr[i];
		minnum = min(minnum, arr[i]);
	}
	for (i = 1; i <= minnum ; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[j] % i != 0)
			{
				break;
			}
		}
		if (j == n) cout << i << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}