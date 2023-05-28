#include <iostream>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		cout << (int)sqrt(num) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}