#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int A , B , temp = 0;
    cin >> A;
    for (int i = 0; i < 9; i++)
    {
        cin >> B;
        temp += B;
    }
    cout << A - temp;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}