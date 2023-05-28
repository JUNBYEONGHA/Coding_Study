#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

int arr[6];
int w, h, ww, hh;

void Answer()
{
	int size , t;
	cin >> size;
	for (int i = 0; i < 6; i++)
	{
		cin >> t;
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i ++)
	{
		if (i % 2 == 0)
		{
			if (w < arr[i])
				w = arr[i];
		}
		else
		{
			if (h < arr[i])
				h = arr[i];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			if (h == arr[(i + 5) % 6] + arr[(i + 1) % 6])
				ww = arr[i];
		}
		else
		{
			if (w == arr[(i + 5) % 6] + arr[(i + 1) % 6])
				hh = arr[i];
		}
	}
	cout << ((w * h - ww * hh) * size);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}