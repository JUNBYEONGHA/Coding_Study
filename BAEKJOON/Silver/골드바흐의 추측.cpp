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

int num;
void Input()
{
	cin >> num;
}
void Solution()
{
	int A;
	while (num--)
	{
		cin >> A;
		int D;
		for (int i = 0; i <= A/2; i++)
		{
			if (isPrime(i))
				if(isPrime(A-i))
					D = i;
		}
		cout << D << " " << A - D << endl;
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