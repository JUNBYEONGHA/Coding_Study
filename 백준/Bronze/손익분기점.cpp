#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int A,B,C;

void Input()
{
	cin >> A >> B >> C;
}
void Solution()
{
	int count = 0;
	if (B < C)
		cout << A / (C - B) + 1;
	else
		cout << "-1";
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