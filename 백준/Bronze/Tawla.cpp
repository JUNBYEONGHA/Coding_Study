#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

string dice1[7] = { "","Yakk","Doh","Seh","Ghar","Bang","Sheesh" };
string dice2[7] = { "","Habb Yakk","Dobara","Dousa","Dorgy","Dabash","Dosh" };

void Answer()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int a, b;
		cin >> a >> b;
		int small = min(a, b);
		int big = max(a, b);

		string result = "";
		cout << "Case " << i << ": ";
		if (small == big)
		{
			result += dice2[small];
		}
		else
		{
			if (small == 5 && big == 6)
				cout << "Sheesh Beesh";
			else
				result += dice1[big] + " " + dice1[small];
		}
		cout << result << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}