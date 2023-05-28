#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define endl "\n"
using namespace std;

int t, score;
void Answer()
{
    cin >> t;
    while (t--) {
        double p[7];
        score = 0;
        for (int i = 0; i < 7; i++) cin >> p[i];
        score += 9.23076 * pow(26.7 - p[0], 1.835); //100���� ���
        score += 4.99087 * pow(42.5 - p[3], 1.81); //200���� �޸���
        score += 0.11193 * pow(254 - p[6], 1.88); //800���� �޸���

        score += 1.84523 * pow(p[1] - 75, 1.348); //���̶ٱ�
        score += 56.0211 * pow(p[2] - 1.5, 1.05); //��ȯ������
        score += 0.188807 * pow(p[4] - 210, 1.41); //�ָ��ٱ�
        score += 15.9803 * pow(p[5] - 3.8, 1.04); //â������
        cout << score << '\n';
    }

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}