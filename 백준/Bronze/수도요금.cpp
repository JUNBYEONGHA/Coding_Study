#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int a, b, c, d, e, x, y;
	cin >> a >> b >> c >> d >> e;
	x = a * e;
	if (c < e)
		y = b + ((e - c) * d);
	else
		y = b;
	cout << ( x < y ? x : y);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}