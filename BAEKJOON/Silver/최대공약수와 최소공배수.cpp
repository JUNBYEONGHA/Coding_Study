#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int A, B;

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	int a,b,temp;
	a = A;
	b = B;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	cout << a << endl;
	cout << A*B / a;
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