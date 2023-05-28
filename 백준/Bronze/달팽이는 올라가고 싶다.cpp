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
	int temp = (C - A) / (A - B);
	int day = 1;
	day += temp;
	if ((C - A) % (A - B) != 0)
		day++;
	if (A > C)
		cout << "1";
	else
		cout << day;
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