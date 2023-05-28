#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	float a, b;
	cin >> a >> b;
	float temp = a - a * b / 100;
	if (temp >= 100) cout << 0;
	else cout << 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}