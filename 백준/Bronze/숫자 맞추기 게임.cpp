#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	for (int i = 1; ; i++)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		cout << i << ". ";
		if (3 * n % 2 == 0)
			cout << "even "<< (3 * n + 1) / 2 * 3 / 9 << endl;
		else
			cout << "odd "<< (3 * n) / 2 * 3 / 9 << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}