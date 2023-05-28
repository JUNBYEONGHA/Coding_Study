#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b;
	cin >> a >> b;
	int temp = a * 8 + b * 3 - 28;
	if (temp <= 0) cout << 0;
	else cout << temp;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}