#include <iostream>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

int arr[9][9];

void Answer()
{
	int answer = 0;
	pair<int, int> answerindex;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > answer)
			{
				answer = arr[i][j];
				answerindex = { i,j };
			}
		}
	}
	cout << answer << endl;
	cout << answerindex.first + 1 << " " << answerindex.second + 1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}