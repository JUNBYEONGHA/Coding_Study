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
	while (n--)
	{
		int e;
		char a , b, c ,d;
		cin >> a >> b >> c >> d >> e;
		int temp = (a - 'A') * 676 + (b - 'A') * 26 + (c - 'A') * 1 - e;
		if (abs(temp) <= 100) cout << "nice" << endl;
		else cout << "not nice" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}