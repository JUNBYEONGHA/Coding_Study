#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int n, m;
char w[7][20] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday","Monday", "Tuesday" };
void Answer()
{
	int n, m;
	cin >> m >> n;
	for (int i = 1; i < n; i++) m += mon[i];
	cout << w[m % 7];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}