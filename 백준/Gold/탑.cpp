#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

void Answer()
{
    stack<pair<int, int> > s;  // pair<int, int> : index, height
    int num, height;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> height;

        while (!s.empty()) {
            //����ž �߰����� ��
            if (height < s.top().second) { // s.top().second
                cout << s.top().first << " ";
                break;
            }
            //����ž ã�� ������ ��� pop
            s.pop();
        }
        //���� ž�� ���ٸ�
        if (s.empty()) {
            cout << 0 << " ";
        }
        //���� ���̸� ���ÿ� Ǫ��
        s.push(make_pair(i + 1, height));
    }
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}