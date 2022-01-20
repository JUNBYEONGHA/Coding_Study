#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
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
	int answer = 0;
	for (int i = 1; i < num; i++)
	{
		answer = i;
		int temp = i;
		while (temp)
		{
			answer += (temp % 10);
			temp /= 10;
		}
		if (answer == num) {
			cout << i;
			return;
		}
	}
	cout << "0";
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