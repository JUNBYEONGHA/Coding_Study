#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	double inittemp, inputtemp;
	cin >> inittemp;
	while (true)
	{
		cin >> inputtemp;
		if (inputtemp == 999) break;
		cout << fixed;
		cout.precision(2);
		cout << inputtemp - inittemp << endl;
		inittemp = inputtemp;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}