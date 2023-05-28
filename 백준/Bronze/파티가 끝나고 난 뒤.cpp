#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int L, P, lp;
	int a, b, c, d, e;
	cin >> L >> P;
	cin >> a >> b >> c >> d >> e;
	lp = L * P;
	cout << a - lp << " " << b - lp << " " << c - lp
		<< " " << d - lp << " " << e - lp;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
