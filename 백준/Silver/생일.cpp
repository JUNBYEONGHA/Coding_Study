#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n;
    cin >> n;
    int a = 100000000, A = 0;
    string m, M;
    for (int i = 0; i < n; i++)
    {
        int yy, mm, dd;
        string name;
        cin >> name >> dd >> mm >> yy;
        int age = (yy - 1990) * 365 + mm * 31 + dd;
        if (a > age)
        {
            m = name;
            a = age;
        }
        if (A < age)
        {
            M = name;
            A = age;
        }
    }
    cout << M << endl << m << endl;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}