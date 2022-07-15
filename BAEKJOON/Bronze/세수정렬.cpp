#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	
	cout << c << " " << b << " " << a;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}