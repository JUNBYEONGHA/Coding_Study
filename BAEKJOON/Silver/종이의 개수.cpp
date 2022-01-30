#include<iostream>
#include<deque>
#include<string>

#define endl "\n"
using namespace std;

int paper[3001][3001];
int count1 = 0, count2 = 0, count3 = 0;

void getpaper(int n , int x , int y)
{
	int temp = paper[x][y];
	bool check = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (temp != paper[i][j])
			{
				check = false;
				break;
			}
		}
		if (!check) break;
	}
	if (check)
	{
		if (temp == -1)
			count1++;
		else if (temp == 0)
			count2++;
		else
			count3++;
		return;
	}
	for (int i = x; i < x + n; i += n/3)
	{
		for (int j = y; j < y + n; j += n/3)
		{
			getpaper(n / 3, i, j);
		}
	}
}

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cin >> paper[i][j];
		}
	}

	getpaper(num, 0, 0);

	cout << count1 << endl << count2 << endl << count3;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}