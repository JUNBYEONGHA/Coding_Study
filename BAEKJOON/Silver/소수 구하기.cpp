#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int A,B;

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
	cin >> A >> B;
}
void Solution()
{
	for (int i = A; i <= B; i++)
	{
		if (isPrime(i))
			cout << i << endl;
	}
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