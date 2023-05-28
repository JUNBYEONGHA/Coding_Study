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

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int n, w, L;
	cin >> n >> w >> L;
	queue<int> bridge;
	vector<int> arr(n);
	int cnt = 0, weight = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		while (true) 
		{
			if (bridge.size() == w)
			{
				weight -= bridge.front();
				bridge.pop();
			}
			if (weight + arr[i] <= L) break;
			bridge.push(0);
			cnt++;
		}
		bridge.push(arr[i]);
		weight += arr[i];
		cnt++;
	}
	cout << cnt + w;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}