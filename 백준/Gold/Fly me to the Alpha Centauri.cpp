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
	while (num--)
	{
		long long x, y;
		long long move, max = 0;
		cin >> x >> y;
		while (max * max <= y - x)
			max++;
		max--;
		move = 2 * max - 1;
		long long rem = y - x - max * max;
		rem = (long long)ceil((double)rem / (double)max);
		move += rem;
		cout << move << endl;
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