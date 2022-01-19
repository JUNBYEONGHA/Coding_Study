#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int x,y,w,h;
void Input()
{
	cin >> x >> y >> w >> h;
}
void Solution()
{
	int A = ((w - x) < (h - y)) ? (w - x) : (h - y);
	int B = (x < y) ? x : y;
	int answer = min(A, B);
	cout << answer;
	
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