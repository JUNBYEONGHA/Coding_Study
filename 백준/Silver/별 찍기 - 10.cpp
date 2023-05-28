#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

void star(int i, int j, int num)
{
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0)
            cout << '*';
        else
            star(i, j, num / 3);
    }
}
int num;
void Input()
{
	cin >> num;
}
void Solution()
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
            star(i, j, num);
        cout << endl;
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