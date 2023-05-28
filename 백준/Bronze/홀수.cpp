#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a , s = 0 , m = 1000;
	for (int i = 0; i < 7; i++)
	{
		cin >> a;
		if (a % 2 == 1)
		{
			s += a;
			m = min(m, a);
		}
	}
	if (s == 0) cout << "-1";
	else  cout << s << endl << m << endl;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}