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
	int n;
	cin >> n;
	int num[10001] = { 0, };
	for (int i = 0; i < n; i++) 
	{ 
		int temp; 
		cin >> temp; 
		num[temp]++; 
	} 
	for (int i = 1; i <= 10000; i++) 
		for (int j = 0; j < num[i]; j++)
			cout << i << endl;
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