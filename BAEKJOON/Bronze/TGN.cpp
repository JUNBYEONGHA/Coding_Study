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
	int N; cin >> N;
	while (N--)
	{
		int r, e, c; cin >> r >> e >> c;
		if (r < e - c)
		{
			cout << "advertise" << endl;
		}
		else if (r == e - c)
		{
			cout << "does not matter" << endl;
		}
		else
		{
			cout << "do not advertise" << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}