#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int A ,result = 0;
	vector<pair<int, int>> arr;
	for (int i = 0; i < 8; i++)
	{
		cin >> A;
		arr.push_back({ A,i + 1 });
	}
	sort(arr.begin(), arr.end(),greater<>());
	for (int i = 0; i < 5; i++)
	{
		result += arr[i].first;
	}
	cout << result << endl;
	vector<int> answer;
	for (int i = 0; i < 5; i++)
	{
		answer.push_back(arr[i].second);
	}
	sort(answer.begin(), answer.end());
	for (int i = 0; i < 5; i++)
	{
		cout << answer[i] << " ";
	}
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}