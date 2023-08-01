#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

int N, m, M, T, R;
int minute, pulse;

void Answer()
{
	cin >> N >> m >> M >> T >> R;

	if (M - m < T) // 초기상태에서 운동이 불가할 경우
	{
		cout << -1;
		return ;
	}

	pulse = m;
	while (1)
	{
		if (pulse + T <= M)
		{
			pulse += T;
			N--;
		}
		else
		{
			pulse -= R;
			if (pulse < m) pulse = m;
		}
		minute++; // 운동 또는 휴식에 소요된 시간

		if (N == 0)
		{
			cout << minute;
			return ;
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