#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a, b, c, d;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b >> c >> d;
		int temp = a + b + c + d;
		if (temp == 0)
			cout << "D" << endl;
		else if (temp == 1)
			cout << "C" << endl;
		else if (temp == 2)
			cout << "B" << endl;
		else if (temp == 3)
			cout << "A" << endl;
		else
			cout << "E" << endl;
	}
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}