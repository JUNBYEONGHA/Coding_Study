#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int Pibo(int n)
{
	if (n == 1) return 1;
	if (n == 0) return 0;
	return Pibo(n - 1) + Pibo(n - 2);
}
int num;
void Input()
{
	cin >> num;
}
void Solution()
{
	cout << Pibo(num);
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