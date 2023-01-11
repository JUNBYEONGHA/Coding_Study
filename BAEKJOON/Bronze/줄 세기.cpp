#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int count = 0;
	string n;

	while (getline(cin ,n)) {
		count++;
	}
	cout << count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}