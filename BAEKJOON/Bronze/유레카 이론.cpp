#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int triangleNum[1001];
int t;

bool ck(int num) {
    for (int i = 1; i <= 50; i++)
        for (int j = 1; j <= 50; j++)
            for (int k = 1; k <= 50; k++)
                if (triangleNum[i] + triangleNum[j] + triangleNum[k] == num)
                    return true;
    return false;
}


void Answer()
{
    for (int i = 1; i <= 1000; i++) triangleNum[i] = triangleNum[i - 1] + i;

    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        cout << ck(num) << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}