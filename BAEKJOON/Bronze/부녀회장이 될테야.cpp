#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;

int getPerson(int A ,int B)
{
	if (B == 1)
		return 1;
	if (A == 0)
		return B;
	return (getPerson(A - 1, B) + getPerson(A, B - 1));
}

void Input()
{
	cin >> num;
}
void Solution()
{
	int A, B;
	while (num--)
	{
		cin >> A >> B;
		cout << getPerson(A, B) << endl;
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