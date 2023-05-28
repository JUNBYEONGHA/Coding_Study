#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int A;

int hansoo(int n)
{
	int count = 0 ,a ,b ,c;
	if (n < 100)
		return n;
	else
	{
		for (int i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i % 100) / 10;
			c = i % 10;
			if ((a - b) == (b - c))
				count++;
		}
		return (99 + count);
	}
}
void Input()
{
	cin >> A;
}
void Solution()
{
	cout << hansoo(A);
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