#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int answer = 91;
	int a, b, c;
	cin >> a >> b >> c;
	cout << "The 1-3-sum is " << answer + a * 1 + b * 3 + c * 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}