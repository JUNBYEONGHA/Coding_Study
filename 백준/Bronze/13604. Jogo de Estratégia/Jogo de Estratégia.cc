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
	int J, R;
	cin >> J >> R;
	vector<int> arr(J * R) , player(J);
	for (int i = 0; i < J * R; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0 , j = 0; i < J * R; i++ , j++)
	{
		player[j % J] += arr[i];
	}
	int result = 0, index = 0;
	for (int i = 0; i < J; i++)
	{
		if (result <= player[i])
		{
			result = player[i];
			index = i + 1;
		}
	}
	cout << index;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}