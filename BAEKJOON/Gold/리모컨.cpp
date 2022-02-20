#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

#define endl "\n"
using namespace std;

int INF = 1000001;
int noButton[10];

bool Possible(int num) {
	if (num == 0) {
		if (noButton[0] == 1)
			return false;
		else
			return true;
	}
	while (num) {
		if (noButton[num % 10] == 1) 
		{
			return false;
		}
		num /= 10;
	}
	return true;
}

int getMinimum(int num) 
{
	int From100 = abs(num - 100);
	int Min = INF;
	int tmp;
	for (int i = 0; i <= INF; i++) {
		if (Possible(i)) {
			tmp = to_string(i).length();
			tmp += abs(i - num);
			Min = min(Min, tmp);
		}
	}
	return min(From100, Min);
}

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		noButton[n] = 1;
	}
	cout << getMinimum(N) << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}