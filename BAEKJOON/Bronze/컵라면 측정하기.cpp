#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	double k, d1, d2, n;
	cin >> k >> d1 >> d2;
	n = (max(d1, d2) - min(d1, d2)) / 2.0;
	cout << k * k - n * n;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}