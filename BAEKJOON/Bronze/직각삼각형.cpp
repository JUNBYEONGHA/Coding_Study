#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

void Input()
{
	
}
void Solution()
{
	int A, B, C;
	while (true)
	{
		cin >> A >> B >> C;
		if (A == 0 || B == 0 || C == 0) break;
		if (A > C)
		{
			int temp = A;
			A = C;
			C = temp;
		}
		if (B > C)
		{
			int temp = B;
			B = C;
			C = temp;
		}
		if (A * A + B * B == C * C)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
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