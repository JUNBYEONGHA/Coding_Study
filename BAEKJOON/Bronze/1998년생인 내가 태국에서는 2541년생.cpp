#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int A;

void Input()
{
	cin >> A;
}
void Solution()
{
	cout << A - 543;
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