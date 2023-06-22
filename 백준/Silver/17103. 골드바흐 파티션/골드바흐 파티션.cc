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

#define MAX 1000001
bool primeN[MAX];

void Answer()
{
	int t; cin >> t;
	for (int i = 0; i < MAX; i++)
	{
		primeN[i] = true;
	}
	primeN[0] = primeN[1] = false;
	for (int i = 2; i * i < MAX; i++)
	{
		if (primeN[i] == 0) continue;
		for (int j = i * 2; j < MAX; j += i)
		{
			primeN[j] = false;
		}
	}
	while (t--)
	{
		int N; cin >> N;
		int cnt = 0;
		for (int i = 0; i <= N / 2; i++)
		{
			if (primeN[N - i] && primeN[i]) 
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}