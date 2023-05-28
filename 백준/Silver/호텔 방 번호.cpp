#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;
int rooms[5001];

void Answer()
{
	int N, M;
	for (int i = 1; i <= 5000; i++)
	{
		int a[10] = { 0, };
		int temp = i;
		bool check = true;
		while (temp)
		{
			if (++a[temp % 10] == 2)
			{
				check = false;
				break;
			}
			temp /= 10;
		}
		if (check)
		{
			rooms[i] = rooms[i - 1] + 1;
		}
		else
		{
			rooms[i] = rooms[i - 1];
		}
	}
	while (cin >> N >> M)
	{
		cout << rooms[M] - rooms[N - 1] << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}