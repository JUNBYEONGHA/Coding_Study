#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

int getTn(int n)
{
	return n * (n + 1) / 2;
}


void Answer()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;

		int result = 0;

		for (int i = 1; i <= n; i++)
		{
			result += i * getTn(i + 1);
		}

		cout << result << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}