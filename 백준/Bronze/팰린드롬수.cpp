#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

string a;

void Answer()
{
	while (true)
	{
		cin >> a;
		if (a[0] == '0') break;
		for (int i = 0; i <= a.size() / 2 ; i++)
		{
			char A = a[i], B = a[a.size() - 1 - i];
			if (A != B)
			{
				cout << "no" << endl;
				break;
			}
			else if (i == a.size() / 2)
			{
				cout << "yes" << endl;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}