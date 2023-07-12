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
	int N;
	cin >> N;
	vector<int> input(N);
	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
	}
	int last = input[N - 1];
	int pivot, result = 1;
	for (int i = N - 2; i >= 0; i--)
	{
		pivot = input[i];
		if (pivot > last)
		{
			result++;
			last = pivot;
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