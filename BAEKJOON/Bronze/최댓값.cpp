#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

void Input()
{
}
void Solution()
{
	int A, max = -1000000, max_index = 0;
	int index = 1;
	while (cin >> A)
	{
		if (max < A)
		{
			max = A;
			max_index = index;
		}
		index++;
	}
	cout << max << endl << max_index;
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