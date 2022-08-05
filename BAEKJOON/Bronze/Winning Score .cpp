#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int A = a * 3 + b * 2 + c * 1;
	int B = d * 3 + e * 2 + f * 1;
	if (A == B)
		cout << 'T';
	else if (A > B)
		cout << 'A';
	else
		cout << 'B';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}