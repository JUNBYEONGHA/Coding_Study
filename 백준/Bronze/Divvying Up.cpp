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
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		sum += a;
	}
	if (sum % 3 == 0) cout << "yes";
	else cout << "no";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}