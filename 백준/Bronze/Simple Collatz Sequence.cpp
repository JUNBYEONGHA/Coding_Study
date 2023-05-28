#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	long long n;
	int time = 0;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 1)
		{
			n++;
			time++;
		}
		n /= 2;
		time++;
	}
	cout << time;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}