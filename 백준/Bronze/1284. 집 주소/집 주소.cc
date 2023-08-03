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

	while (true) {
		cin >> N;
		int sum = 0;

		if (N == 0)
			return;

		while (true) {
			if (N % 10 == 1) sum += 2;
			else if (N % 10 == 0) sum += 4;
			else sum += 3;

			if (N < 10) break;

			N /= 10;
			sum += 1;
		}

		cout << sum + 2 << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}