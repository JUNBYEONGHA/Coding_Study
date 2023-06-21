#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

bool isPrime(LL num)
{
	if (num <= 1) return false;
	for (LL j = 2; j <= sqrt(num); j++)
	{
		if (num % j == 0)
		{
			return false;
		}
	}
	return true;
}

void Answer()
{
	int t; cin >> t;
	while (t--)
	{
		LL n; cin >> n;
		for (LL i = n; ; i++)
		{
			if (isPrime(i))
			{
				cout << i << endl;
				break;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}