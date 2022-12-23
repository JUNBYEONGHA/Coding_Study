#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

char scan[51][51];

void Answer()
{
	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> scan[i][j];
		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int r = 0; r < ZR; r++)
		{
			for (int j = 0; j < C; j++)
			{
				for (int c = 0; c < ZC; c++)
				{
					cout << scan[i][j];
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