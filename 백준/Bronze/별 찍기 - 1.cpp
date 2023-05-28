#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int num;

void Input()
{
	cin >> num;
}
void Solution()
{
	for (int i = 1; i <= num ; i++)
	{
		for (int j = 0; j < i ; j++)
		{
			cout << "*";
		}
		cout << endl;
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