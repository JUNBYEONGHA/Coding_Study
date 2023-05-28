#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	if (w1 - w2 >= 2 && h1 - h2 >= 2) cout << 1;
	else cout << 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}