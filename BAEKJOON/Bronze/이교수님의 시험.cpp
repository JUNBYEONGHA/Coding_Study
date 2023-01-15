#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	for (int j = 1; j <= t; j++)
	{
		int check = false;
		int a;
		for (int i = 1; i <= 5; i++)
		{
			cin >> a;
			if (a != i) check = true;
		}
		for (int i = 1; i <= 5; i++)
		{
			cin >> a;
			if (a != i) check = true;
		}
		if (!check) cout << j << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}