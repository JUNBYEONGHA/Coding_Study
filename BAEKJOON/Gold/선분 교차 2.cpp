#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

vector<pair<LL, LL>> line;

int ccw(pair<LL, LL> a, pair<LL, LL> b, pair<LL, LL> c)
{
	LL temp = (a.first * b.second) + (b.first * c.second) + (c.first * a.second);
	temp -= (a.first * c.second) + (b.first * a.second) + (c.first * b.second);

	if (temp > 0) return 1;
	else if (temp == 0) return 0;
	else return -1;
}

void Answer()
{
	LL x, y;
	for (int i = 0; i < 4; i++)
	{
		cin >> x >> y;
		line.push_back({ x,y });
	}
	int a = ccw(line[0], line[1], line[2]) * ccw(line[0], line[1], line[3]);
	int b = ccw(line[2], line[3], line[0]) * ccw(line[2], line[3], line[1]);

	if (a == 0 && b == 0) 
	{
		if (line[0] > line[1]) swap(line[0], line[1]);
		if (line[2] > line[3]) swap(line[2], line[3]);
		if (line[0] <= line[3] && line[2] <= line[1])
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
	else if (a <= 0 && b <= 0)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}