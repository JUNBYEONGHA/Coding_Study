#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int num;

void Input()
{
	cin >> num;
}
void Solution()
{
	string A;
	int point = 0, total = 0;
	while (num--)
	{
		cin >> A;
		point = 0;
		for (char a : A)
		{
			if (a == 'O')
			{
				point++;
			}
			else
			{
				point = 0;
			}
			total += point;
		}
		cout << total << endl;
		total = 0;
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