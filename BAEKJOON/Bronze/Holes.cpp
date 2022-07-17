#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	if (n == 0) cout << 1;
	else if (n == 1) cout << 0;
	else
	{
		while (n)
		{
			if (n % 2 == 1)
			{
				cout << 4;
				n -= 1;
			}
			else
			{
				cout << 8;
				n -= 2;
			}
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