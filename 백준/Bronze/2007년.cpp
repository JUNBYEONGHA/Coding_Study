#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

void Answer()
{
	int a, b;
	cin >> a >> b;
	int temp = 0;
	for (int i = 0; i < a - 1; i++)
	{
		temp += month[i];
	}
	temp += b;
	switch (temp%7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	default:
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