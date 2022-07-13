#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    int n, minX = 100000, maxX = -100000, minY = 100000, maxY = -100000;
    cin >> n;
    for (int i = 0, x, y; i < n; i++) {
        cin >> x >> y;
        minX = min(x, minX);
        maxX = max(x, maxX);
        minY = min(y, minY);
        maxY = max(y, maxY);
    }
    cout << (maxX - minX) * (maxY - minY);
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}