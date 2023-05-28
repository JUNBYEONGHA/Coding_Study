#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, b;
	cin >> a >> b;
	if (a >= 3 && b <= 4) cout << "TroyMartian" << endl;
	if (a <= 6 && b >= 2) cout << "VladSaturnian" << endl;
	if (a <= 2 && b <= 3) cout << "GraemeMercurian" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}