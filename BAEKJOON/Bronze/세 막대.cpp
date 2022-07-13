#include<iostream>
#include<algorithm>
#include<cmath>
#define endl "\n"
using namespace std;
int a[3];
void Answer()
{
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] > a[2]) cout << a[0] + a[1] + a[2];
    else cout << (a[0] + a[1]) * 2 - 1;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}