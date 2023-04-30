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

int n;
queue<int> q1;
stack<int> st;

void Answer()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;
		q1.push(q);
	}
	int order = 1;
	while (!q1.empty()) {
		int cur = q1.front();
		if (cur == order) {
			order++;
			q1.pop();
		}
		else {
			if (!st.empty() && st.top() == order) {
				st.pop();
				order++;
			}
			else
			{
				st.push(cur);
				q1.pop();
			}
		}
	}
	while (!st.empty()) {
		int cur = st.top();
		st.pop();
		if (cur != order) {
			cout << "Sad";
			return;
		}
		order++;
	}
	cout << "Nice";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}