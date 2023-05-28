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
		int A, B;
		cin >> A >> B;
		cout << A + B << endl;
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