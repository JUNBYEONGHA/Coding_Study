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

string input, result;
string a, b;

void Answer()
{
	cin >> input;

	result = "{";

	for (int i = 0; i < input.size() - 2; i++) {
		for (int j = i + 1; j < input.size() - 1; j++) {

			string val;

			for (int u = i; u >= 0; u--)
				val += input[u];

			for (int u = j; u > i; u--)
				val += input[u];

			for (int u = input.size() - 1; u > j; u--)
				val += input[u];

			if (result > val) result = val;

		}
	}
	cout << result << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}