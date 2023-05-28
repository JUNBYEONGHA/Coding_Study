#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cout << "Hello World, Judge " << i + 1 <<"!" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}