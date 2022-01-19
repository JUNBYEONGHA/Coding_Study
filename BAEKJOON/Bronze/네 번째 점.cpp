#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

void Input()
{
	
}
void Solution()
{
	int x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2)cout << x3 << " ";
	else if (x1 == x3)cout << x2 << " ";
	else cout << x1 << " ";

	if (y1 == y2)cout << y3;
	else if (y1 == y3)cout << y2;
	else cout << y1;
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