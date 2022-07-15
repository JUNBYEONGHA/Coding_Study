#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
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
		cout << "Distances: ";
		for (int i = 0; i < a.size(); i++)
		{
			int temp = b[i] - a[i];
			if (temp < 0) temp += 26;
			cout << temp << " ";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}