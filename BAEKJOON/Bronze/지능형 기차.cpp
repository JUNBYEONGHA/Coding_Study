#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, result = 0 , R = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> a >> b;
		result += b;
		result -= a;
		R = max(R, result);
	}
	cout << R;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}