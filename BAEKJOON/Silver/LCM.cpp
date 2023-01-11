#include <iostream>

#define endl "\n"
using namespace std;	

int gcd(int x, int y)
{
	if (y == 0) return x;
	else return gcd(y, x % y);
}

void Answer()
{
	int a, b, n;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		int temp = gcd(a, b);
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