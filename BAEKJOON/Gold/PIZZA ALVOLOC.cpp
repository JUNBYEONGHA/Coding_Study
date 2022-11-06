#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

struct Point
{
    int x, y;
};

int ccw(Point a, Point b, Point c)
{
	int ret = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);

	if (ret > 0)
		return 1;
	else if (ret < 0)
		return -1;
	else
		return 0;
}

void Answer()
{
	Point pt[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> pt[i].x >> pt[i].y;
	}if (ccw(pt[0], pt[1], pt[2]) * ccw(pt[0], pt[1], pt[3]) < 0)
		cout << 1;
	else
		cout << 0;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}