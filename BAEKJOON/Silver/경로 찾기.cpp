#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int N;
int matrix[101][101];

void Answer()
{
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0) matrix[i][j] = 1000;
        }
    }
    for (int bridge = 1; bridge <= N; bridge++)
        for (int fr = 1; fr <= N; fr++)
            for (int to = 1; to <= N; to++)
                matrix[fr][to] =
                min(matrix[fr][to], matrix[fr][bridge] + matrix[bridge][to]);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (matrix[i][j] == 1000)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }
        cout << endl;
    }

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}