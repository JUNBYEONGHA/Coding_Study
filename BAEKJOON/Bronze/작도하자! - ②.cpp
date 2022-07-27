#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	double a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(7);
	cout << a / b;


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}