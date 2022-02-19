#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int a[10];
void Answer()
{
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 9);
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if ((sum - (a[i] + a[j])) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (i == k || j == k) continue;
					cout << a[k] << endl;
				}
				return;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}