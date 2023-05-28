#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int num , A;

void Input()
{
	cin >> num >> A;
}
void Solution()
{
	int B;
	while (num--)
	{
		cin >> B;
		if (B < A)
			cout << B << " ";
	}
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