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
	int N;
	cin >> N;
	int one = 0, zero = 0;
	for (int i = 0; i < N; i++)
	{
		int a; cin >> a;
		if (a == 1) one++;
		else zero++;
	}
	cout << (one > zero ? "Junhee is cute!" : "Junhee is not cute!");
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

