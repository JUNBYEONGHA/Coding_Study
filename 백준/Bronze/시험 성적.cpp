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
	if (A >= 90)
		cout << "A";
	else if (A >= 80)
		cout << "B";
	else if (A >= 70)
		cout << "C";
	else if (A >= 60)
		cout << "D";
	else
		cout << "F";
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