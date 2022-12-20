#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    int as, bs;
    int i = 1;
    while (1)
    {
        char a[1001], b[1001];
        cin >> a >> b;
        if (!strcmp(a, "END") && !strcmp(b, "END")) { break; }
        as = strlen(a);
        bs = strlen(b);
        if (as != bs)
            cout << "Case " << i++ << ": different" << endl;
        else
        {
            sort(a, a + as);
            sort(b, b + bs);
            if (!strcmp(a, b))
                cout << "Case " << i++ << ": same" << endl;
            else
                cout << "Case " << i++ << ": different" << endl;
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