#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	string a, b;
	cin >> a;
	for (int i = 1; i < N; i++)
	{
		cin >> b;
		for (int j = 0; j < a.size(); j++)
		{
			if (a[j] != b[j])
			{
				a[j] = '?';
			}
		}
	}
	cout << a;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}