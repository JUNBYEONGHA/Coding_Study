#include<iostream>
#define endl "\n"
using namespace std;

char arr[397][397];

void Answer()
{
	int num;
	cin >> num;
	int len = 4 * (num - 1) + 1;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			arr[i][j] = ' ';
		}
	}
	int start = 0, end = len;
	for (int i = 0; i < num; i++)
	{
		for (int j = start; j < end; j++)
		{
			arr[start][j] = '*';
		}
		for (int j = start; j < end; j++)
		{
			arr[j][start] = '*';
		}
		for (int j = start; j < end; j++)
		{
			arr[j][end - 1] = '*';
		}
		for (int j = start; j < end; j++)
		{
			arr[end - 1][j] = '*';
		}
		start += 2; end -= 2;
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}