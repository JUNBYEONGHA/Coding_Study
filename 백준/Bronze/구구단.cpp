#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int A , B;

void Input()
{
	cin >> A;
}
void Solution()
{
	for (int i = 1; i < 10; i++)
	{
		cout << A << " * " << i << " = " << A * i << endl;
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