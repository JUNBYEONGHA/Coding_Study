#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int n, f;
	cin >> n >> f;
	n = n - n % 100;
	for (int i = n; ; i++) {
		if (i % f == 0)
		{
			if (i % 100 < 10)
				cout << "0";
			cout << i % 100;
			break;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}