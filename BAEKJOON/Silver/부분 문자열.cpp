#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string A, B;
	while (cin >> A >> B)
	{
		int index = 0;
		for (int i = 0; i < B.size(); i++)
		{
			if (A[index] == B[i])
				index++;
		}
		if (index == A.size()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}