#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int arr[1001];
int num;

void sort(int start, int end)
{
	if (start >= end)
		return;
	int low = start + 1 , high = end;
	int temp , pivot = start;
	while (low <= high)
	{
		while (low <= end && arr[low] <= arr[pivot])
		{
			low++;
		}
		while (high > start && arr[high] >= arr[pivot])
		{
			high--;
		}
		if (low > high)
		{
			temp = arr[high];
			arr[high] = arr[pivot];
			arr[pivot] = temp;
		}
		else
		{
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
		}
	}
	sort(start, high - 1);
	sort(high + 1, end);
}

void Input()
{
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	sort(0, num - 1);
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}