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
#include <cstring>

#define endl "\n"
using LL = long long;
using namespace std;

int result[11];

void Answer()
{
	for (int i = 0; i < 2047; i++)
	{
		int a;
		for (int j = 0; j < 11; j++)
		{
			cin >> a;
			if (a == 0)
			{
				result[j] ^= 0;
			}
			else
			{
				result[j] ^= a;
			}
		}
	}
	for (int i = 0; i < 11; i++)
	{
		cout << result[i] << " ";
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}