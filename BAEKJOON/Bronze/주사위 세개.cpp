#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << 10000 + a * 1000;
	else if (a == b || b == c || a == c)
		cout << (a == b ? 1000 + a * 100 : 1000 + c * 100);
	else
		cout << max(a, max (b, c)) * 100;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}