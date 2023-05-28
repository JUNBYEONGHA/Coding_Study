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
	string s;
	cin >> s;
	sort(s.begin(), s.end());

	int answer = 0;
	do {
		bool lucky = true;
		for (int i = 0; i < s.size() - 1; i++) {
			if (s[i] == s[i + 1]) {
				lucky = false;
				break;
			}
		}

		if (lucky)
			answer++;
	} while (next_permutation(s.begin(), s.end()));

	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}