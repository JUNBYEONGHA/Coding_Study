#include <iostream>

#define endl "\n"
using namespace std;

int factorial(int a)
{
	if (a == 1 || a == 0 ) return 1;
	return a * factorial(a - 1);
}
int factorial(int a , int rimit)
{
	if (a == rimit) return 1;
	return a * factorial(a - 1 , rimit);
}

void Input()
{
	int a, c;
	cin >> a >> c;
	cout << (factorial(a, a-c) / factorial(c));
}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}
