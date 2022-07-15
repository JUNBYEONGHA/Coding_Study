#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a, b , index = 0;
    cin >> a >> b;
    for (int i = 1; i <= a ; i++)
    {
        if (a % i == 0)
        {
            index++;
            if (b == index)
            {
                cout << i << endl;
                return;
            }
        }
    }
    cout << "0";
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}