#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

#define endl "\n"
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
void Answer()
{
	int t, m, n, x, y, i, j;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m >> n >> x >> y;
		int limit = lcm(m, n);
		for ( j = x; j <= limit ; j += m)
		{
			int temp = (j % n == 0) ? n : j % n;
			if (temp == y)
			{
				cout << j << endl;
				break;
			}
		}
		if (j > limit)
			cout << -1 << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}