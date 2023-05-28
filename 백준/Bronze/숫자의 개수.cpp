#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int numbers[10];
long long A, B, C;
void Input()
{
	cin >> A >> B >> C;
}
void Solution()
{
	long long total = A * B * C;
	while (total)
	{
		numbers[total % 10]++;
		total /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
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