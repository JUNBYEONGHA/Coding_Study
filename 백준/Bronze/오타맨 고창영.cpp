#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n;
    cin >> n;
    int a;
    string b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        b.erase(b.begin() + a - 1);
        cout << b << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}