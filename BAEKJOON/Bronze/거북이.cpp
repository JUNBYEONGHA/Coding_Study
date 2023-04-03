#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	vector<int> move(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> move[i];
	}
	sort(move.begin(), move.end());
	cout << move[0] * move[2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}