#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	vector <int> score1, score2;
	int a;
	for (int i = 0; i < 4; i++)
	{
		cin >> a;
		score1.push_back(a);
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> a;
		score2.push_back(a);
	}
	sort(score1.begin(), score1.end(), greater<int>());
	sort(score2.begin(), score2.end(), greater<int>());
	cout << score1[0] + score1[1] + score1[2] + score2[0];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}