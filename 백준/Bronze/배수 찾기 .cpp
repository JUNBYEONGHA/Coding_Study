#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	int a;
	while (true)
	{
		cin >> a;
		if (a == 0) break;
		if (a % n != 0)
		{
			cout << a << " is NOT a multiple of " << n << "." << endl;
		}
		else
		{
			cout << a << " is a multiple of " << n << "." << endl;
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