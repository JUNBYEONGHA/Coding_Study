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
	int room = 0;
	for (int i = 2; i <= A; room++)
	{
		i += 6 * room;
	}
	if (A == 1) room = 1;
	cout << room;
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