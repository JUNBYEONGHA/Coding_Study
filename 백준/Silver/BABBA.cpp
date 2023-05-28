#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int A[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}

	char lastWinner = 'D';
	int AScore = 0, BScore = 0;

	for (int i = 0; i < 10; i++)
	{
		int B;
		cin >> B;

		if (A[i] > B)
		{
			AScore += 3;

			lastWinner = 'A';
		}
		else if (B > A[i])
		{
			BScore += 3;

			lastWinner = 'B';
		}
		else
		{
			AScore += 1;
			BScore += 1;
		}
	}

	cout << AScore << " " << BScore << endl;

	if (AScore > BScore)
	{
		cout << "A" << endl;
	}
	else if (AScore < BScore)
	{
		cout << "B" << endl;
	}
	else
	{
		cout << lastWinner;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}