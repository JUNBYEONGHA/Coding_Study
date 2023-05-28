#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;

void Input()
{
	cin >> num;
}
void Solution()
{
	int A, B, C , count = 0;
	while (num--)
	{
		cin >> A >> B >> C;
		if((C % A) > 0)
			count = (C % A) * 100 + (C / A + 1);
		else
			count = A * 100 + (C / A);
		cout << count << endl;
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