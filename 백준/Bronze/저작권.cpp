#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int A, I;
	cin >> A >> I;
	cout << A * (I - 1) + 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}