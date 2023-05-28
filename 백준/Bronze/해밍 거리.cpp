#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		int hamingcount = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if(a[i] != b[i])
			{
				hamingcount++;
			}
		}
		cout << "Hamming distance is " << hamingcount << "." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}