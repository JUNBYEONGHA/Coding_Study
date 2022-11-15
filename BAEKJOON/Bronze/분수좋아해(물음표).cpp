#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	while (true)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a / b << " " << a % b << " / " << b << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}