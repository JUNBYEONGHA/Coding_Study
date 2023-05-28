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
		char c;
		cin >> c;
		if (c == '2')
			a++;
		else
			b++;
	}
	if (a == b) cout << "yee";
	else if (a > b) cout << '2';
	else cout << 'e';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}