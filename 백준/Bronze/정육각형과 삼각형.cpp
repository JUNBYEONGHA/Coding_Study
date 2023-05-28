#include<iostream>
#include<algorithm>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    double L;
    cin >> L;
    cout.precision(25);
    cout << L * L * sqrt(3) / 4;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}