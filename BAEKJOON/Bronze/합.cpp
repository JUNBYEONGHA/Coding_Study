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
	int total = 0;
	for (int i = num; i > 0; i--)
	{
		total += i;
	}
	cout << total;
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