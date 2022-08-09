#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{	
	int answer;
	cin >> answer;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a , b;
		cin >> a >> b;
		answer -= (a * b);
	}
	if (answer == 0)
		cout << "Yes";
	else
		cout << "No";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}