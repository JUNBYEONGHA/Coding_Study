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
	int n, k;
	cin >> n >> k;

	if (k >= n) {
		cout << 0;
	}
	else {
		int answer = 0;
		while (1) {
			int cnt = 0;
			int temp = n;
			while (temp > 0) {
				if (temp % 2 == 0) {
					temp /= 2;
				}
				else {
					temp /= 2;
					cnt++;
				}
			}
			if (k >= cnt) {
				break;
			}
			n++;
			answer++;
		}
		cout << answer;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}