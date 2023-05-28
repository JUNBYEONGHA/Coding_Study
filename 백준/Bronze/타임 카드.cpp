#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
    int i, sh, sm, ss, eh, em, es;
    int start, end, t, h, m, s;
    for (i = 0; i < 3; i++) {
        cin >> sh >> sm >> ss >> eh >> em >> es;
        start = (sh * 3600) + (sm * 60) + ss;
        end = (eh * 3600) + (em * 60) + es;
        t = end - start;
        h = t / 3600;
        m = (t % 3600) / 60;
        s = (t % 3600) % 60;

        cout << h << " " << m << " " << s << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}