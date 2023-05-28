#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

int card[14][14];

void Answer()
{
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i += 3)
	{
		int cardnumber = stoi(S.substr(i + 1, 2));
		card[S[i] - 'H'][cardnumber]++;
	}
	int P = 0, K = 0, H = 0, T = 0;
	for (int i = 1; i <= 13; i++)
	{
		if (card['P' - 'H'][i] == 0) P++;
		else if (card['P' - 'H'][i] >= 2) P = 14;
	}
	for (int i = 1; i <= 13; i++)
	{
		if (card['K' - 'H'][i] == 0) K++;
		else if (card['K' - 'H'][i] >= 2) K = 14;
	}
	for (int i = 1; i <= 13; i++)
	{
		if (card['H' - 'H'][i] == 0) H++;
		else if (card['H' - 'H'][i] >= 2) H = 14;
	}
	for (int i = 1; i <= 13; i++)
	{
		if (card['T' - 'H'][i] == 0) T++;
		else if (card['T' - 'H'][i] >= 2) T = 14;
	}
	if (P >= 14 || K >= 14 || H >= 14 || T >= 14) cout << "GRESKA";
	else cout << P << " " << K << " " << H << " " << T;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}