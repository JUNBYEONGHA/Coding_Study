#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 1;; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
            if (i % arr[j] == 0)
            {
                cnt++;
                if (cnt >= 3)
                {
                    cout << i;
                    return;
                }
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