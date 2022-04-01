#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int a;
	hex(cin);
	cin >> a;
	cout << dec << a;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
