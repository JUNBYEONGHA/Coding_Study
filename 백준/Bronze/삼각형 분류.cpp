#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int a[3] = {0,};
		cin >> a[0] >> a[1] >> a[2];
		cout << "Case #" << i << ": ";
		sort(a, a + 3);
		if (a[0] == a[1]  &&  a[1] == a[2])
		{
			cout << "equilateral" << endl;
		}
		else if (a[1] == a[0] || a[1] == a[2] || a[2] == a[0])
		{
			if (a[2] < a[0] + a[1])
				cout << "isosceles" << endl;
			else
				cout << "invalid!" << endl;
		}
		else
		{
			if (a[2] < a[0] + a[1])
				cout << "scalene" << endl;
			else
				cout << "invalid!" << endl;
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