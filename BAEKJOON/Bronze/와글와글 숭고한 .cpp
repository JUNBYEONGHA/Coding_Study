#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c >= 100)
	{
		cout << "OK";
	}
	else
	{
		int MIN = min(a, min(b, c));
		if (MIN == a) cout << "Soongsil";
		else if (MIN == b) cout << "Korea";
		else if (MIN == c) cout << "Hanyang";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}