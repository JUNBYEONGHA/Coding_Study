#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int n;
	cin >> n;
	int a;
	int temp = 0,count = 0,result = 0;
	cin >> a;
	temp = a;
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		if (temp > a)
		{
			count++;
		}
		else
		{
			temp = a;
			count = 0;
		}
		result = max(result, count);
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}