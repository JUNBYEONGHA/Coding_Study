#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	a *= a; b *= b; c *= c; d *= d; e *= e;
	cout << (a + b + c + d + e) % 10;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
