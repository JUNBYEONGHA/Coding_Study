#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int dice[7];

void Answer()
{
	int n;
	cin >> n;
	int answer = 0;
	while (n--)
	{
		int temp = 0;
		for (int i = 1; i <= 6; i++)
		{
			dice[i] = 0;
		}
		for (int i = 0; i < 4; i++)
		{
			int a;
			cin >> a;
			dice[a]++;
		}
		int b = 0 , c = 0;
		for (int i = 1; i <= 6; i++)
		{
			if (b < dice[i])
			{
				b = dice[i];
				c = i;
			}
		}
		if (b == 4)
		{
			temp += 50000 + c * 5000;
		}
		else if (b == 3)
		{
			temp += 10000 + c * 1000;
		}
		else if (b == 2)
		{
			int check = false;
			for (int i = 1; i <= 6; i++)
			{
				if (dice[i] == 2 && c != i)
				{
					temp += i * 500;
					check = true;
				}
			}
			if (check)
			{
				temp += 2000 + c * 500;
			}
			else
			{
				temp += 1000 + c * 100;
			}
		}
		else
		{
			int d = 0;
			for (int i = 1; i <= 6; i++)
			{
				if (dice[i] == 1) d = i;
			}
			temp += d * 100;
		}
		answer = max(answer, temp);
	}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}