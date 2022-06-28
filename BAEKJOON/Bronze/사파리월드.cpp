#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	long long A, B;
	cin >> A >> B;
	cout << (A - B > 0 ? A - B : B - A);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}