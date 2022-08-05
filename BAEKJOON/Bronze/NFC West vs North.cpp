#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	cout << "NFC West       W   L  T" << endl
		<< "-----------------------" << endl
		<< "Seattle        13  3  0" << endl
		<< "San Francisco  12  4  0" << endl
		<< "Arizona        10  6  0" << endl
		<< "St. Louis      7   9  0" << endl
		<< endl
		<< "NFC North      W   L  T" << endl
		<< "-----------------------" << endl
		<< "Green Bay      8   7  1" << endl
		<< "Chicago        8   8  0" << endl
		<< "Detroit        7   9  0" << endl
		<< "Minnesota      5  10  1";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}