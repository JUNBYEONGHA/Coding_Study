#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int numbers[42];

void Input()
{
}
void Solution()
{
	int A , total = 0;
	while (cin >> A)
	{
		numbers[A % 42]++;
	}
	for (int i : numbers)
	{
		if (i > 0)
		{
			total++;
		}
	}
	cout << total;
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