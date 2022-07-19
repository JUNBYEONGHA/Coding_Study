#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int person[101];

void Answer()
{
	int n;
	int result = 0 , first_value;
	cin >> n;
	cin >> first_value;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> person[i];
	}
	while (true)
	{
		int index = 0;
		int max_index = 0;
		for (int i = 0; i < n-1; i++)
		{
			if (max_index < person[i])
			{
				max_index = person[i];
				index = i;
			}
		}
		if (first_value > max_index)
		{
			cout << result << endl;
			break;
		}
		first_value++;
		person[index]--;
		result++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}