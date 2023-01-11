#include <iostream>

#define endl "\n"
using namespace std;	

int n, i, t, k; string s[101];

void Answer()
{
	cin >> n;
	for (; i < n; i++) cin >> s[i];
	cin >> k;
	if (k == 1)
		for (i = 0; i < n; i++)
			cout << s[i] << endl;
	else if (k == 2)
		for (i = 0; i < n; i++, cout << endl)
			for (t = n - 1; t >= 0; t--)
				cout << s[i][t];
	else
		for (i = n - 1; i >= 0; i--)
			cout << s[i] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}