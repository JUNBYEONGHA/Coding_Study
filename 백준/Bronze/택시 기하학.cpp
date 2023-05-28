#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
#define PI 3.1415926535897932
double num;

void Input()
{
	cin >> num;
}
void Solution()
{
	cout << fixed;
	cout.precision(6);
	cout << num * num * PI << "\n" << 2 * num * num << "\n";
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