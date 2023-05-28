#include<iostream>
#include<string>
#define endl "\n"
using namespace std;


void Answer()
{
	string A;
	while (true)
	{
		getline(cin, A);
		if (A == "") break;
		cout << A << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}