#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	if (N % 2 == 0)
		cout << "SK";
	else
		cout << "CY";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}