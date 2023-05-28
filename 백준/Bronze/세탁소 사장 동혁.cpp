#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

int A = 25, B = 10, C = 5, D = 1;
int a, b, c, d;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		a = 0, b = 0, c = 0, d = 0;
		a = n / A;
		n %= A;
		b = n / B;
		n %= B;
		c = n / C;
		n %= C;
		d = n / D;
		n %= D;
		cout << a << " " << b << " " << c << " " << d << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}