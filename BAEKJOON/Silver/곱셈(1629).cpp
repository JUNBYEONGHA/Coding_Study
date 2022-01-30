#include<iostream>
#include<deque>
#include<string>

#define endl "\n"
using namespace std;

long long A, B, C;
int result = 0;
long long pow(long long x, long long y)
{
	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	if (y % 2 > 0)
		return pow(x, y - 1) * x;
	long long half = pow(x, y / 2);
	half %= C;
	return (half * half) % C;
}

void Answer()
{
	cin >> A >> B >> C;
	cout << pow(A, B) % C;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}