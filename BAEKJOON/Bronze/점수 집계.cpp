#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	int arr[5];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[j];
		}
		sort(arr , arr + 5);
		if (arr[3] - arr[1] >= 4)
		{
			cout << "KIN" << endl;
		}
		else
		{
			cout << arr[1] + arr[2] + arr[3] << endl;
		}
	}
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}