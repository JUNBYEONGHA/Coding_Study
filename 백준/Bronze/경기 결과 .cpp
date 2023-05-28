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
	int a = 0, b = 0;
	while (n--)
	{
		int c, d;
		cin >> c >> d;
		if (c > d) a++;
		else if (c < d) b++;
	}
	cout << a << " " << b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}