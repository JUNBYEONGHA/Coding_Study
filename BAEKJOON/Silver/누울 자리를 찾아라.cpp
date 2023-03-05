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

char room[101][101];

void Answer()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> room[i][j];
		}
	}
	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		int dot = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[i][j] == 'X')
			{
				dot = 0;
			}
			else
			{
				dot++;
				if (dot == 2)
				{
					x++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int dot = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[j][i] == 'X')
			{
				dot = 0;
			}
			else
			{
				dot++;
				if (dot == 2)
				{
					y++;
				}
			}
		}
	}
	cout << x << " " << y;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}