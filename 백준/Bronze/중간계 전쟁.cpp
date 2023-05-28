#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int t, g, s, gan[6] = { 1,2,3,3,4,10 }, sa[7] = { 1,2, 2,2,3,5,10 }, ganScore, saScore;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		ganScore = saScore = 0;
		for (int i = 0; i < 6; i++)
		{
			cin >> g;
			ganScore += gan[i] * g;
		}
		for (int i = 0; i < 7; i++)
		{
			cin >> s;
			saScore += sa[i] * s;
		}

		cout << "Battle " << i << ": ";
		if (ganScore > saScore)
			cout << "Good triumphs over Evil" << endl;
		else if (ganScore == saScore)
			cout << "No victor on this battle field" << endl;
		else
			cout << "Evil eradicates all trace of Good" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}