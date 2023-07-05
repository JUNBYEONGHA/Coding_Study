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
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

int length[11];

void Answer()
{
	int N, left;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> left;
		for (int j = 1; j <= N ; j++)
		{
			if (left == 0 && length[j] == 0)
			{
				length[j] = i;
				break;
			}
			else if (length[j] == 0)
			{
				left--;
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << length[i] << " ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}