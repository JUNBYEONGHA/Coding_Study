#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	while (T--)
	{
		int A, B;
		cin >> A >> B;
		cout << (A * A) / (B * B) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}