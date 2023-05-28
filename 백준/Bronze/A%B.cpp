#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
double A, B;

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	cout.precision(12);
	cout << fixed;
	cout << A / B;
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