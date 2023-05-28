#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	while (T--)
	{
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		int a = d + (n * p);
		int b = (n * s);
		if (a < b)
		{
			cout << "parallelize" << endl;
		}
		else if (a > b)
		{
			cout << "do not parallelize" << endl;
		}
		else
		{
			cout << "does not matter" << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}