#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

int num;
string str;
int fact[11] = { 1, };

void Answer()
{
    for (int i = 1; i <= 10; i++) fact[i] = fact[i - 1] * i;
    while (cin >> str >> num) {
        cout << str << " " << num << " = ";
        if (num > fact[str.length()]) { 
            cout << "No permutation" << endl;
            continue;
        }

        int idx = 0;
        do {
            idx++;
            if (idx == num) {
                cout << str << endl;
                break;
            }
        } while (next_permutation(str.begin(), str.end()));
    }
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}