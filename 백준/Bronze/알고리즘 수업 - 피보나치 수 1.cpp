#include<iostream>
#define endl "\n"
using namespace std;

int f[41];

int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}
int fibonacci(int n)
{
	f[1] = 1; f[2] = 1;
	int count = 0;
	for (int i = 3; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		count++;
	}
	return count;
}

void Answer()
{
	int num;
	cin >> num;
	cout << fib(num) << " " << fibonacci(num);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}