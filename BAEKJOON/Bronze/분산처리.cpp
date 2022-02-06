#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;
void Answer()
{
	int t, a, b, mul;
	cin >> t;
	while (t--) {
		mul = 1;
		cin >> a >> b;
		b = !(b % 4) ? 4 : b % 4;
		while (b--)mul *= a;
		cout << (mul % 10 ? mul % 10 : 10) << "\n";
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}