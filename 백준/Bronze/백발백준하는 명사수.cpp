#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	long long x1, x2, y1, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	long long D = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (sqrt((r1 + r2) * (r1 + r2)) > D)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}