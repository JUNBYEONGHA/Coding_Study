#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a ,b = 20000, result = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		b = min(b, a);
	}
	result += b;
	for (int i = 0; i < 2; i++)
	{
		cin >> a;
		b = min(b, a);
	}
	result += b;
	cout << result - 50;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}