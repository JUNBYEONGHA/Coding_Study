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
	if (A > B)
		cout << ">";
	else if (A < B)
		cout << "<";
	else
		cout << "==";
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