#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;
int board[2001];
bool palindrom[2001][2001] = { false, };
void Answer()
{
	int length;
	cin >> length;
	for (int i = 1; i <= length; i++)
	{
		cin >> board[i];
	}

	for (int i = 1; i < length; i++)
	{
		if (board[i] == board[i + 1])
			palindrom[i][i + 1] = true;
	}
	for (int i = 1; i <= length; i++)
	{
		palindrom[i][i] = true;
	}
	for (int i = length - 1; i >= 1; i--)
	{
		for (int j = i + 2; j <= length ; j++)
		{
			if (board[i] == board[j] && palindrom[i + 1][j - 1] == true)
			{
				palindrom[i][j] = true;
			}
		}
	}

	int time , a, b;
	cin >> time;
	for (int i = 0; i < time; i++)
	{
		cin >> a >> b;
		cout << palindrom[a][b] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}