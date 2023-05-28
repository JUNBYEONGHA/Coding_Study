#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	int n, ans = 0;
	cin >> n;
	int sx, sy, x, y, nx, ny;
	cin >> sx >> sy;
	x = sx, y = sy;
	for (int i = 0; i < n - 1; i++) {
		cin >> nx >> ny;
		ans += abs(nx + ny - x - y);
		x = nx, y = ny;
	}
	ans += abs(x + y - sx - sy);
	cout << ans;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}