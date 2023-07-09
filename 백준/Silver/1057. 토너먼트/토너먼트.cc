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
	int N, A, B;
	cin >> N >> A >> B;
	int round = 0;
	while (A != B)
	{
		round++;
		A = A % 2 == 0 ? A / 2 : A / 2 + 1;
		B = B % 2 == 0 ? B / 2 : B / 2 + 1;
	}
	cout << round;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}