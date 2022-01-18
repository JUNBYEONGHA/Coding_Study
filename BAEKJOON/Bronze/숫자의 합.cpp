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
	char A;
	int total = 0;
	while (num--)
	{
		cin >> A;
		total += A - '0';
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