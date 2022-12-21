#include <iostream>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int func(int a, int b, int c, int d, int cnt)
{
	if (a == b && b == c && c == d && d == a)
	{
		return cnt;
	}

	return func(abs(a - b), abs(b - c), abs(c - d), abs(d - a), cnt + 1);
}

void Answer()
{
	while (1)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			break;
		}

		cout << func(a, b, c, d, 0) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}