#include <iostream>

#define endl "\n"
using namespace std;	

void Answer()
{
	long long n;
	cin >> n;
	string s = "";
	while (n)
	{
		s = char(n % 2 + '0') + s;
		n /= 2;
	}
	cout << s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}