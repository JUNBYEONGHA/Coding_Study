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
int allBlock, block, height;
void Answer()
{
	cin >> allBlock;
	while (block <= allBlock) {
		block += 2 * height * height + 2 * height + 1;
		height++;
	}
	cout << height - 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}