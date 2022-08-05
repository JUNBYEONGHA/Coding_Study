#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	int temp = 5 * n - 400;
	cout << temp << endl;
	if (temp == 100)
		cout << 0;
	else if (temp < 100)
		cout << 1;
	else
		cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}