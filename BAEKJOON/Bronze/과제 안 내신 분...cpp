#include<iostream>
#define endl "\n"
using namespace std;

bool check[31];

void Answer()
{
	int A;
	for (int i = 0; i < 28; i++)
	{
		cin >> A;
		check[A] = true;
	}
	int j = 0;
	for (int i = 1; i < 31; i++)
	{
		if (!check[i])
		{
			cout << i << endl;
			if (j == 1) break;
			j++;
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