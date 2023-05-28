#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}