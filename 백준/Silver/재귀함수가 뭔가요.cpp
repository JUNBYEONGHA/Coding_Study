#include<iostream>
#define endl "\n"
using namespace std;

int N;
void Print(int num)
{
	if (num == N)
	{
		for (int i = 0; i < num; i++) cout << "____";
		cout << "\"����Լ��� ������?\"" << endl;
		for (int i = 0; i < num; i++) cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
		for (int i = 0; i < num; i++) cout << "____";
		cout << "��� �亯�Ͽ���." << endl;
		return;
	}
	for (int i = 0; i < num; i++) cout << "____";
	cout << "\"����Լ��� ������?\"" << endl;
	for (int i = 0; i < num; i++) cout << "____";
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
	for (int i = 0; i < num; i++) cout << "____";
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
	for (int i = 0; i < num; i++) cout << "____";
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
	Print(num + 1);
	for (int i = 0; i < num; i++) cout << "____";
	cout << "��� �亯�Ͽ���." << endl;
}

void Answer()
{
	cin >> N;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	Print(0);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}