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
	int t;
	cin >> t;
	while (t--)
	{
		int A = 0, B = 0;
		for (int i = 0; i < 9; i++)
		{
			int a, b;
			cin >> a >> b;
			A += a, B += b;
		}
		if (A > B) cout << "Yonsei" << endl;
		else if (A < B) cout << "Korea" << endl;
		else cout << "Draw" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}

