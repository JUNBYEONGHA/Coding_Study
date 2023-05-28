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
	int n;
	while (cin >> n)
	{
		if (n == -1) break;
		int temp = 0;
		vector<int> v;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				temp += i;
				v.push_back(i);
			}
		}
		if (temp == n)
		{
			cout << n << " = ";
			for (int i = 0; i < v.size() - 1; i++)
			{
				cout << v[i] << " + ";
			}
			cout << v[v.size() - 1] << endl;
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
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

