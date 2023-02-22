#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

LL dist(LL x, LL y)
{
	return x * x + y * y;
}

void Answer()
{
	LL N, x = 0, y, R, cnt = 0;
	cin >> N;
	N /= 2;
	y = N - 1;
	R = N * N;
	while (x <= N && y >= 0)
	{
		LL xydist = dist(x + 1, y);
		if (xydist <= R) x++;
		if (xydist >= R) y--;
		cnt++;
	}
	cout << cnt * 4;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}