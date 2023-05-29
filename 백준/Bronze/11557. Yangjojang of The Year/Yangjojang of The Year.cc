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
	int T; cin >> T;
	while (T--)
	{
		int N; cin >> N;
		string name = " ";
		int L = 0;
		for (int i = 0; i < N; i++)
		{
			string s; int l;
			cin >> s >> l;
			if (L < l)
			{
				name = s;
				L = l;
			}
		}
		cout << name << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}