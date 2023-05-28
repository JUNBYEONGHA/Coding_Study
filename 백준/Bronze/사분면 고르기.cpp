#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int A , B;

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	if (A > 0)
	{
		if (B > 0)
		{
			cout << "1";
		}
		else
		{
			cout << "4";
		}
	}
	else
	{
		if (B > 0)
		{
			cout << "2";
		}
		else
		{
			cout << "3";
		}
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