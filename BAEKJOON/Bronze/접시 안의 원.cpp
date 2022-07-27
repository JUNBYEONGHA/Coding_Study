#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	int t;
	cin >> t;
	float half = (float)t / 2.0f;
	cout << (int)(half * half + 0.5) << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}