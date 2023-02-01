#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int n, T, i;
	cin >> n >> T;
	vector<int> scheduel(n);
	for (i = 0; i < n; i++)
	{
		cin >> scheduel[i];
	}
	int result = 0;
	for (i = 0; i < n; i++)
	{
		result += scheduel[i];
		if (result > T)
		{
			break;
		}
	}
	cout << i;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}