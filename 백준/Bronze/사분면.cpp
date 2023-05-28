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

void Answer()
{
	int n; cin >> n;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0) q1++;
		else if (x < 0 && y > 0) q2++;
		else if (x < 0 && y < 0) q3++;
		else if (x > 0 && y < 0) q4++;
		else axis++;
	}
	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << axis << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

