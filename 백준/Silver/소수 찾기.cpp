#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;

bool isPrime(int n)
{
	if (n < 2)
		return false;
	int length = sqrt(n);
	for (int i = 2; i <= length; i++)
		if (n % i == 0)
			return false;
	return true;
}

void Input()
{
	cin >> num;
}
void Solution()
{
	int A ,count = 0;
	while (num--)
	{
		cin >> A;
		if (isPrime(A))
			count++;
	}
	cout << count;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}