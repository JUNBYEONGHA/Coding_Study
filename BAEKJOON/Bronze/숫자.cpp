#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	long long a, b;
	cin >> a >> b;
	if (a > b)
	{
		long long temp = b;
		b = a;
		a = temp;
	}
	if (a == b)
		cout << 0 << endl;
	else
		cout << b - a - 1 << endl;
	for (long long i = a + 1; i < b; i++)
	{
		cout << i << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}