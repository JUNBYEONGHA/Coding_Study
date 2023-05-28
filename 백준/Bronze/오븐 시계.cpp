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
	int result = a * 60 + b + c;
	if (result >= 1440) result -= 1440;
	cout << result / 60 << " " << result % 60;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}