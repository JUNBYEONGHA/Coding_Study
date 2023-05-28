#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int A;

void Input()
{
	cin >> A;
}
void Solution()
{
	if (A % 4 == 0)
	{
		if (A % 400 == 0)
		{
			cout << "1";
		}
		else if (A % 100 == 0)
		{
			cout << "0";
		}
		else
		{
			cout << "1";
		}
	}
	else
	{
		cout << "0";
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