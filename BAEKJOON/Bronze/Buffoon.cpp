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
	int b;
	cin >> b;
	n--;
	while (n--)
	{
		int a;
		cin >> a;
		if (a > b)
		{
			b = -1;
		}
	}
	if (b == -1)cout << 'N';
	else cout << 'S';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}