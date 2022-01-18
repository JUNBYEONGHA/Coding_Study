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
	int A , max = -1000000, min = 1000000;
	while (num--)
	{
		cin >> A;
		if (max < A)
			max = A;
		if (min > A)
			min = A;
	}
	cout << min << " " << max;
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