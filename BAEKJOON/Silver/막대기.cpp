#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int X, count = 0;
	cin >> X;
	while (X)
	{
		if (X % 2 == 1)
			count++;
		X /= 2;
	}
	cout << count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}