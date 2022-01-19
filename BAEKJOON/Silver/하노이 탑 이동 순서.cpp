#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
        cout << start << " " << to << endl;
    else
    {
        hanoi(n - 1, start, bypass, to);
        cout << start << " " << to << endl;
        hanoi(n - 1, bypass, to, start);
    }
}
int num;
void Input()
{
	cin >> num;
}
void Solution()
{
    cout << (1 << num) - 1 << "\n";
    hanoi(num, 1, 3, 2);
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