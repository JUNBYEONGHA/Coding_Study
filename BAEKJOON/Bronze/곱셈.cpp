#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int A, B;

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	cout << A * (B % 10) << endl;
	cout << A * ((B % 100) / 10) << endl;
	cout << A * (B / 100) << endl;
	cout << A * B << endl;
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