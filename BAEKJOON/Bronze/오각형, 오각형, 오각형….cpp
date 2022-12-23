#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	int num;
	int sum;

	sum = 5;
	num = 7;

	cin >> n;

	for (int i = 2; i <= n; ++i) {
		sum += num;
		num += 3;

		sum %= 45678;
		num %= 45678;
	}

	cout << sum << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}