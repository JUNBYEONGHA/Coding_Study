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

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	double N, B, M;
	while (cin >> N >> B >> M)
	{
		int years = 0;
		while (N < M)
		{
			years++;
			N += (N * B) / 100;
		}
		cout << years << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}