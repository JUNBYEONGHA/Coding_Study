#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	cout << a1 * b1 + a2 * b2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}