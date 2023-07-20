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

int N, L;
int Arr[5000010];

void Answer()
{
	cin >> N >> L;
	for (int i = 1; i <= N; i++)
	{
		cin >> Arr[i];
	}
	deque<pair<int, int>> dq;
	for (int i = 1; i <= N; i++)
	{
		if (!dq.empty()) 
		{
			if (dq.front().second < i - L + 1)
			{
				dq.pop_front();
			}
		}
		while (!dq.empty() && dq.back().first > Arr[i])
		{
			dq.pop_back();
		}
		dq.push_back({ Arr[i], i });
		cout << dq.front().first << " ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}