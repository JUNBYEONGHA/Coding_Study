#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, budget, income;
	vector<int> incomes;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> income;
		incomes.push_back(income);
	}
	cin >> budget;
	sort(incomes.begin(), incomes.end()); // 이분탐색을 위한 정렬

	int left = 0, right = incomes[N - 1]; // 범위 지정
	int incomes_sum = 0; 
	int mid = 0;
	while (left <= right)
	{
		incomes_sum = 0;
		mid = (left + right) / 2; // 중간값 계산
		for (int i = 0; i < N; i++)
		{
			if (incomes[i] < mid)
			{
				incomes_sum += incomes[i]; // 값이 중간값 보다 작으면 기본에 있는 값 더하기
			}
			else
			{
				incomes_sum += mid; // 값이 중간값 보다 크면 중간값 더하기
			}
		}
		if (incomes_sum <= budget)
		{
			left = mid + 1; // 값이 작으면 +1
		}
		else
		{
			right = mid - 1; // 값이 크면 -1
		}
	}
	cout << right; // 최종 적으로 나온 값 출력
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}