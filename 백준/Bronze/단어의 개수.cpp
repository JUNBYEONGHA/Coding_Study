#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

void Input()
{
}
void Solution()
{
	string A;
	int count = 0;
	while (cin>>A)
	{
		count++;
	}
	cout << count;
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