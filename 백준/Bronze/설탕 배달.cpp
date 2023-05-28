#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;

void Input()
{
	cin >> num;
}
void Solution()
{
	int count = 0;
	int A, B;
	A = num / 5;
	while (true)
	{
		if (A < 0)
		{
			cout << "-1";
			return;
		}
		if ((num - (5 * A)) % 3 == 0)
		{
			B = (num - (5 * A)) / 3;
			break;
		}
		A--;
	}
	cout << A + B;
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