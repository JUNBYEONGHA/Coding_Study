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

string str;
stack<char> st;

void Answer()
{
	cin >> str;
	int res = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			st.push('(');
		}
		else {
			if (st.empty()) {
				res++;
			}
			else {
				st.pop();
			}
		}
	}
	res += st.size();
	cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}