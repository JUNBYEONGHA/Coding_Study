#include<iostream>
#include<queue>
#include<string>
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
	int i = 1;
	int diff = 1;
	for (int sum = 0; sum + i < A; i++)
	{
		sum += i;
		diff = A - sum;
	}
	if(i % 2 == 1)
		cout << (i-diff+1)<< "/" << diff;
	else
		cout << diff << "/" << (i-diff+1);
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