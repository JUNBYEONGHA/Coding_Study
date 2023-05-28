#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	double a[5] = { 350.34,230.9,190.55,125.3,180.9 }, sum;
	int n;
	cin >> n;
	while (n--) {
		sum = 0;
		for (int i = 0; i < 5; i++)
		{
			double x;
			cin >> x;
			sum += a[i] * x;
		}
		cout << fixed;
		cout.precision(2);
		cout << "$" << sum << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}