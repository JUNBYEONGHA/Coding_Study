#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define endl "\n"
using namespace std;

int test[200001][4];
int answer[4];

void Answer()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int index;
		cin >> index;
		cin >> test[index][0] >> test[index][1]
			>> test[index][2] >> test[index][3];
	}
	for (int i = 0; i < 4; i++)
	{
		int index = 0;
		int index_max = -1;
		for (int j = 1; j <= n; j++)
		{
			if (index_max < test[j][i])
			{
				index = j;
				index_max = test[j][i];
			}
		}
		answer[i] = index;
		for (int i = 0; i < 4; i++)
		{
			test[index][i] = -1;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		cout << answer[i] << " ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}