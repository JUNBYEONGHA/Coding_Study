#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

string n;
int tnumber;
string name;
vector <string> tname(51);

int cal(string s, string name) {
    int L = 0, O = 0, V = 0, E = 0;
    int res = 0;
    for (auto c : s) {
        switch (c) {
        case 'L': L++; break;
        case 'O': O++; break;
        case 'V': V++; break;
        case 'E': E++; break;
        }
    }
    for (auto c : name) {
        switch (c) {
        case 'L': L++; break;
        case 'O': O++; break;
        case 'V': V++; break;
        case 'E': E++; break;
        }
    }

    res = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
    return res;
}

void Answer()
{
    cin >> name;
    cin >> tnumber;

    int tmp = -1;
    string answ = "";
    for (int i = 0; i < tnumber; i++) {
        cin >> tname[i];
    }
    sort(tname.begin(), tname.begin() + tnumber);

    for (int i = 0; i < tnumber; i++) {
        int winner = cal(tname[i], name);
        if (winner > tmp) { tmp = winner; answ = tname[i]; }
    }

    cout << answ;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}