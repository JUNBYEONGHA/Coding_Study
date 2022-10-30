#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

string BFS(string start , int count)
{
	// ó�� �Է� ���� ���ڿ��� ���̸� ����
	int length = start.size();
	// �ʺ� Ž���� ���� ���ڿ� queue ����
	queue<string> q;
	q.push(start);

	// �Է¹��� k �� ��ŭ �ݺ��� ����
	for (int i = 0; i < count; i++)
	{
		// �湮�� üũ �ϱ� ���� set �� ���� �湮 üũ
		set<string> visit;
		int qsize = q.size();
		for (int i = 0; i < qsize; i++)
		{
			string start = q.front(); 
			q.pop();
			// set �� ���� ������ continue
			if (visit.count(start))
				continue;
			visit.insert(start);

			for (int a = 0; a < length - 1; a++)
			{
				for (int b = a + 1; b < length; b++)
				{
					// 0�� ������ ���� ����� �� ����
					if (a == 0 && start[b] == '0') continue;
					// �ڸ��� �ٲ��� set �� �־� �� �� �ٽ� �ڸ��� �ٲߴϴ�.
					swap(start[a],start[b]);
					q.push(start);
					swap(start[a], start[b]);
				}
			}
		}
	}
	string answer = "0";
	// k �� ��ŭ ������ ���� ����� �� ������ ���Ͽ� ���� ū ���� ����մϴ�.
	while (!q.empty())
	{
		answer = max(answer, q.front());
		q.pop();
	}
	// 0���� �����ϴ� ���� ���� ū ��� -1 ���
	if (answer[0] == '0')
		return "-1";
	else
		return answer;
}

void Answer()
{
	string N;
	int K;
	cin >> N >> K;
	cout << BFS(N, K);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}