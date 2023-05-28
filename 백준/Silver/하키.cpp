#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

void Answer()
{
	int w, h, x, y, p;
	int count = 0;
	cin >> w >> h >> x >> y >> p;
	while (p--)
	{
		int a, b;
		cin >> a >> b;

		if ((a - x) * (a - x) + (b - (y + h / 2)) * (b - (y + h / 2)) <= (h / 2) * (h / 2) && a < x)
			count++;
		else if (x <= a && a <= x + w && y <= b && b <= y + h)
			count++;
		else if ((a - (x + w)) * (a - (w + x)) + (b - (y + h / 2)) * (b - (y + h / 2)) <= (h / 2) * (h / 2) && x + w < a)
			count++;
	}
	cout << count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}