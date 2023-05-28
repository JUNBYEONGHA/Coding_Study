#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	string s1, s;
	int a1 = 5, a;
	while (n--)
	{
		cin >> s >> a;
		if (a1 > a)
		{
			s1 = s;
			a1 = a;
		}
	}
	cout << s1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}