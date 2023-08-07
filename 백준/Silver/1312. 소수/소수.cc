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

bool visited[1001];
int max_duplic = -1;
int ans;

void Answer()
{
	int a, b, n;
	cin >> a >> b >> n;
	int result = 0;
	if (a % b == 0)
	{
		cout << 0;
	}
	else
	{
		if (a > b) a = a % b;
		for (int i = 0; i < n; i++)
		{
			a *= 10;
			result = (int)(a / b);
			a = a % b;
		}
		cout << result;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}