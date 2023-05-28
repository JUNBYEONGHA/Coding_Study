#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;

void Input()
{
	cin >> N;
}
void Solution()
{
	while (N--)
	{
		int A, B;
		cin >> A >> B;
		int a, b, temp;
		a = A;
		b = B;
		while (b != 0)
		{
			temp = a % b;
			a = b;
			b = temp;
		}
		cout << A * B / a << endl;
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