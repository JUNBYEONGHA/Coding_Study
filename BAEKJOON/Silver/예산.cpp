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
	sort(incomes.begin(), incomes.end()); // �̺�Ž���� ���� ����

	int left = 0, right = incomes[N - 1]; // ���� ����
	int incomes_sum = 0; 
	int mid = 0;
	while (left <= right)
	{
		incomes_sum = 0;
		mid = (left + right) / 2; // �߰��� ���
		for (int i = 0; i < N; i++)
		{
			if (incomes[i] < mid)
			{
				incomes_sum += incomes[i]; // ���� �߰��� ���� ������ �⺻�� �ִ� �� ���ϱ�
			}
			else
			{
				incomes_sum += mid; // ���� �߰��� ���� ũ�� �߰��� ���ϱ�
			}
		}
		if (incomes_sum <= budget)
		{
			left = mid + 1; // ���� ������ +1
		}
		else
		{
			right = mid - 1; // ���� ũ�� -1
		}
	}
	cout << right; // ���� ������ ���� �� ���
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}