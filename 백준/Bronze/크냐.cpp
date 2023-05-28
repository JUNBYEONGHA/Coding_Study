#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	while (true)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (a <= b)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}