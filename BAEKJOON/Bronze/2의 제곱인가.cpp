#include <iostream>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
    int n, sum = 1;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
        return ;
    }
    while (sum < n) {
        sum *= 2;
    }
    if (sum == n)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}