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
	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0) break;
		cout << A + B << endl;
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