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

int arr[1000001];

void Answer()
{
	int N, L;
	cin >> N >> L;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		arr[i] = arr[i] + arr[i - 1];
	}
	int cnt = 0;
	int resultcnt = 0;
	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		if (i <= L)
			temp = arr[i];
		else
			temp = arr[i] - arr[i - L];
		if (temp >= 129 && temp <= 138)
		{
			cnt++;
		}
	}
	resultcnt = max(resultcnt, cnt);
	cout << resultcnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}