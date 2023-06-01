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
	int arr[2][7] = { 0 };

	int N, K;
	int res = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++) 
	{
		int S, G;
		cin >> S >> G;
		arr[S][G]++;
	}

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 1; j < 7; j++) 
		{
			if (arr[i][j] != 0) 
			{
				res += arr[i][j] / K;
				if (arr[i][j] % K != 0)
					res++;
			}
		}
	}
	cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}