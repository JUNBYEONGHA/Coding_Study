#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	int arr[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}
		sort(arr , arr + 10);
		cout << arr[7] << endl;
	}
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}