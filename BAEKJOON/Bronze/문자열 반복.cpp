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
	while (num--)
	{
		int num2;
		cin >> num2;
		string A;
		cin >> A;
		for (int i = 0; i < A.size(); i++)
		{
			for (int j = 0; j < num2; j++)
			{
				cout << A[i];
			}
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