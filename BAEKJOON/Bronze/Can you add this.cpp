#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}