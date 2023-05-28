#include <iostream>

#define endl "\n"
using namespace std;

long long gcd(long long x, long long y)
{
	if (y == 0) return x;
	else return gcd(y, x % y);
}

void Answer()
{
	long long a, b, n;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		long long temp = gcd(a, b);
		cout << (a / temp) * (b / temp) * temp << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}