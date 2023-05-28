#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	if (r1 < r2)
	{
		swap(x1, x2);
		swap(y1, y2);
		swap(r1, r2);
	}
	cout << fixed;
	cout.precision(3);
	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (d >= r1 + r2)
	{
		cout << "0.000";
	}
	else if (d + r2 <= r1)
	{
		cout << r2 * r2 * acos(-1);
	}
	else
	{
		double theta1 = acos(((r1 * r1) + (d * d) - (r2 * r2)) / (2 * r1 * d));
		double theta2 = acos(((r2 * r2) + (d * d) - (r1 * r1)) / (2 * r2 * d));

		double s1 = (r1 * r1 * theta1) - (r1 * r1 * sin(2 * theta1)) / 2;
		double s2 = (r2 * r2 * theta2) - (r2 * r2 * sin(2 * theta2)) / 2;
		cout << s1 + s2;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}