#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int n,m,answer = 0;
int arr[4][4];
void Answer()
{
	cin >> n >> m;
	char a;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a;
			arr[i][j] = a - '0';
		}
	}
	for (int s = 0; s < (1 << (n * m)); s++)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int current = 0;
			for (int j = 0; j < m; j++)
			{
				int k = i * m + j;
				if ((s & (1 << k)) == 0)
				{
					current = current * 10 + arr[i][j];
				}
				else
				{
					sum += current;
					current = 0;
				}
			}
			sum += current;
		}
		for (int j = 0; j < m; j++)
		{
			int current = 0;
			for (int i = 0; i < n; i++)
			{
				int k = i * m + j;
				if ((s & (1 << k)) != 0)
				{
					current = current * 10 + arr[i][j];
				}
				else
				{
					sum += current;
					current = 0;
				}
			}
			sum += current;
		}
		answer = max(answer, sum);
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}