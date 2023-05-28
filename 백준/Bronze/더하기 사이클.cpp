#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int A , C;

void Input()
{
	cin >> A;
	if (A < 10)
		A *= 10;
	C = A;
}
void Solution()
{
	int B = A, i = 0;
	while (true)
	{
		B = A % 10 * 10 + (A / 10 + A % 10) % 10;
		i++;
		if (B == C) break;
		A = B;
	}
	cout << i;
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