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

int N, ans, h[100002];
stack<int> s;

void Answer()
{
	cin >> N;

	for (int i = 1; i <= N; i++) cin >> h[i];

	s.push(0);
	for (int i = 1; i <= N + 1; i++)
	{

		while (!s.empty() && h[s.top()] > h[i])
		{
			int check = s.top();
			s.pop();
			ans = max(ans, h[check] * (i - s.top() - 1));
		}
		s.push(i);
	}
	cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}