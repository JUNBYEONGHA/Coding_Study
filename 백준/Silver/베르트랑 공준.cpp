#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

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
}
void Solution()
{
	int A;
	while (true)
	{
		cin >> A;
		int count = 0;
		if (A == 0) break;
		for (int i = A+1; i <= A*2; i++)
		{
			if (isPrime(i))
				count++;
		}
		cout << count << endl;
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