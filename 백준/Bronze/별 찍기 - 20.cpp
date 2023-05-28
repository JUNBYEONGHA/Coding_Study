#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		if (i % 2 == 1)
			cout << ' ';
		for (int j = 0; j < num; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}