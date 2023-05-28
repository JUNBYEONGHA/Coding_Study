#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int R1, S;
	cin >> R1 >> S;
	cout << S * 2 - R1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}