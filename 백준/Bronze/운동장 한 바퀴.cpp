#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	float d1, d2;
	cin >> d1 >> d2;

	cout << fixed;
	cout.precision(6);

	cout << d1 * 2 + d2 * 2 * 3.141592;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}