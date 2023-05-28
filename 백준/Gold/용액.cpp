#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<algorithm>
#include<limits>
#define endl "\n"
using namespace std;

int N;
int solution[100001];

void Answer()
{
	cin >> N;
	int left = 0, right = N - 1;
	for (int i = 0; i < N; i++)
	{
		cin >> solution[i];
	}
	int MIN = solution[left], MAX = solution[right];
	int rest = 2000000000;

	while (right > left)
	{
		int temp = solution[left] + solution[right];
		if (abs(temp) < abs(rest))
		{
			rest = abs(temp);
			MIN = solution[left];
			MAX = solution[right];
		}
		if (temp == 0) break; 
		else if (temp < 0)
			left++;
		else
			right--;

	}
	cout << MIN << " " << MAX;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}