#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int num;
int arr[1001];

void Input()
{
	cin >> num;
}
void Solution()
{
	while (num--)
	{
		int num2;
		cin >> num2;
		for (int i = 0; i < num2; i++)
		{
			cin >> arr[i];
		}
		double total = 0, count = 0;
		for (int i = 0; i < num2; i++)
		{
			total += arr[i];
		}
		total /= (double)num2;
		for (int i = 0; i < num2; i++)
		{
			if (arr[i] > total)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (count / (double)num2) * 100 << "%" << endl;
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