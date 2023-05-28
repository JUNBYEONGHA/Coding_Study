#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int arr[100000001];
int temp[100000001];
int num;

void merge(int left, int right)
{
	int L, R, K, A;
	int mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	K = left;

	while (L <= mid && R <= right)
	{
		temp[K++] = arr[L] <= arr[R] ? arr[L++] : arr[R++];
	}
	if (L > mid)
	{
		for ( A = R; A <= right ; A++)
		{
			temp[K++] = arr[A];
		}
	}
	else
	{
		for (A = L; A <= mid; A++)
		{
			temp[K++] = arr[A];
		}
	}
	for (A = left; A <= right; A++)
	{
		arr[A] = temp[A];
	}
}

void mergesort(int left , int right)
{
	if (left == right) return;
	int mid;
	mid = (left + right) / 2;
	mergesort(left, mid);
	mergesort(mid + 1, right);
	merge(left, right);
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
	mergesort(0, num - 1);
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