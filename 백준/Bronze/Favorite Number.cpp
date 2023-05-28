#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	while (N--)
	{
		int V, S;
		cin >> V;
		int numbers[1001] = { 0, };
		for (int i = 0; i < V; i++)
		{
			cin >> S;
			numbers[S]++;
		}
		int result = 0 , index = 0;
		for (int i = 0; i <= 1000; i++)
		{
			if (index < numbers[i])
			{
				result = i;
				index = numbers[i];
			}
		}
		cout << result << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}