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
	char d;
	cin >> a >> d >> b >> d >> c;
	if (a + c < b)
	{
		cout << "hasu";
	}
	else
	{
		if (b == 0)
			cout << "hasu";
		else
			cout << "gosu";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}