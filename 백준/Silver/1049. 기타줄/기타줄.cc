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

void Answer()
{
	int N, M;
	cin >> N >> M;
	int mina = 1001, minb = 1001;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		mina = min(a, mina);
		minb = min(b, minb);
	}
	if (mina >= minb * 6)
	{
		cout << minb * N;
	}
	else
	{
		int result1 = (N / 6) * mina + (N % 6) * minb;
		int result2 = (N / 6) * mina + mina;
		if (result1 < result2) cout << result1;
		else cout << result2;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}