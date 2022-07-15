#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c, d, A = 0, B = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a >> b >> c >> d;
		int temp = a + b + c + d;
		if (A < temp)
		{
			B = i + 1;
			A = temp;
		}
	}
	cout << B << " " << A;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}