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

void Answer()
{
	LL X, Y;
	cin >> X >> Y;
	
	int Z = (Y * 100) / X;

	if (Z >= 99)
	{
		cout << -1;
		return;
	}
	int left = 0, right = 1000000000;
	int result = -1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		int temp = (100 * (Y + mid)) / (X + mid);
		if (Z >= temp)
		{
			result = mid + 1;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
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