#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a = 0;
	for (int i = 0; i < 6; i++)
	{
		char b;
		cin >> b;
		if (b == 'W') a++;
	}
	switch (a)
	{
	case 6 : case 5:
		cout << 1;
		break;
	case 4: case 3:
		cout << 2;
		break;
	case 2: case 1:
		cout << 3;
		break;
	default:
		cout << -1;
		break;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}