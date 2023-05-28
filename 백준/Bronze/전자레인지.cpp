#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

int A = 300, B = 60, C = 10;
int a, b, c;

void Answer()
{
	int t;
	cin >> t;
	a = t / A;
	t %= A;
	b = t / B;
	t %= B;
	c = t / C;
	t %= C;
	if (t != 0)
	{
		cout << -1;
	}
	else
	{
		cout << a << " " << b << " " << c;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}