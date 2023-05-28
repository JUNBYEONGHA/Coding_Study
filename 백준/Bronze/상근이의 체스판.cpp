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

void Answer()
{
	int r, c, a, b;
	cin >> r >> c >> a >> b;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < c; k++)
			{
				for (int l = 0; l < b; l++)
				{
					if ((i + k) % 2 == 0)
						cout << "X";
					else cout << ".";
				}
			}
			cout << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}