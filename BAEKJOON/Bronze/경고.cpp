#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

#define endl "\n"
using namespace std;

int s[3], e[3], ret[3];

void Answer()
{
    char temp;
    cin >> s[0] >> temp >> s[1] >> temp >> s[2];
    cin >> e[0] >> temp >> e[1] >> temp >> e[2];
    if (e[2] >= s[2])ret[2] = e[2] - s[2];
    else { ret[2] = 60 + e[2] - s[2]; e[1]--; }
    if (e[1] >= s[1])ret[1] = e[1] - s[1];
    else { ret[1] = 60 + e[1] - s[1]; e[0]--; }
    if (e[0] >= s[0])ret[0] = e[0] - s[0];
    else { ret[0] = 24 + e[0] - s[0]; }
    if (ret[0] == 0 && ret[1] == 0 && ret[2] == 0)ret[0] = 24;
    cout << setfill('0') << setw(2) << ret[0] << ":" <<
        setfill('0') << setw(2) << ret[1] << ":" << 
        setfill('0') << setw(2) << ret[2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}