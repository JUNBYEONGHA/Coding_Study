#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d;
	cin >> e >> f >> g >> h;
	cout << max((a + b + c + d), (e + f + g + h));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}