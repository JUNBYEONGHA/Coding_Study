#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

int k, head;
string behaving;

void Answer()
{
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> head;
        cin >> behaving;
        for (auto b : behaving) {
            if (b == 'c') head++;
            else head--;
        }
        cout << "Data Set " << i << ":\n" << head << "\n\n";
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}