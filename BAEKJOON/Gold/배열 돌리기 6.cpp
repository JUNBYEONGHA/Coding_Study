#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;

#define MAX 130

int N, Q;
int A_Size;
int A[MAX][MAX];

void First_Operation(int L) {
	int Cnt = 0;
	int tmp[MAX][MAX];
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			tmp[i][j] = A[i][j];
		}
	}
	for (int i = 0; i < A_Size; i += L) {
		for (int j = 0; j < A_Size; j += L) {
			int Y = i;
			int X = j;
			for (int k = Y; k < (Y + L); k++) {
				for (int l = X; l < (X + L); l++) {
					A[Y + L - 1 - k + (L * Cnt)][l] = tmp[k][l];
				}
			}
		}
		Cnt++;
	}
}

void Second_Operation(int L) {
	int Cnt = 0;
	int tmp[MAX][MAX];
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			tmp[i][j] = A[i][j];
		}
	}
	for (int i = 0; i < A_Size; i += L) {
		for (int j = 0; j < A_Size; j += L) {
			int Y = i;
			int X = j;
			for (int k = Y; k < (Y + L); k++) {
				for (int l = X; l < (X + L); l++) {
					A[k][X + L - 1 - l + (L * Cnt)] = tmp[k][l];
				}
			}
			Cnt++;
		}
		Cnt = 0;
	}
}

void Third_Operation(int L) {
	int R = 0, C = 0, Cnt = 0;
	int tmp[MAX][MAX];
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			tmp[i][j] = A[i][j];
		}
	}
	for (int i = 0; i < A_Size; i += L) {
		for (int j = 0; j < A_Size; j += L) {
			int Y = i;
			int X = j;
			for (int k = Y; k < (Y + L); k++) {
				for (int l = X; l < (X + L); l++) {
					A[l - (L * R) + (L * Cnt)][Y + L - 1 - k + (L * C)] = tmp[k][l];
				}
			}
			R++;
			C++;
		}
		Cnt++;
		R = 0;
		C = 0;
	}
}

void Fourth_Operation(int L) {
	int R = 0, C = 0, Cnt = 0;
	int tmp[MAX][MAX];
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			tmp[i][j] = A[i][j];
		}
	}
	for (int i = 0; i < A_Size; i += L) {
		for (int j = 0; j < A_Size; j += L) {
			int Y = i;
			int X = j;
			for (int k = Y; k < (Y + L); k++) {
				for (int l = X; l < (X + L); l++) {
					A[X + L - 1 - l + (L * R)][k + (L * C) - (L * Cnt)] = tmp[k][l];
				}
			}
			C++;
		}
		Cnt++;
		R++;
		C = 0;
	}
}

void Fifth_Operation(int L) {
	First_Operation(A_Size); 
	First_Operation(L);
}

void Sixth_Operation(int L) {
	Second_Operation(A_Size); 
	Second_Operation(L); 
}

void Seventh_Operation(int L) {
	Third_Operation(A_Size); 
	Fourth_Operation(L); 
}

void Eighth_Operation(int L) {
	Fourth_Operation(A_Size); 
	Third_Operation(L); 
}

void Answer()
{
	cin >> N >> Q;
	A_Size = (1 << N);
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < Q; i++) {
		int K, L;
		cin >> K >> L;
		int Len = (1 << L);
		if (K == 1) {
			First_Operation(Len);
		}
		else if (K == 2) {
			Second_Operation(Len);
		}
		else if (K == 3) {
			Third_Operation(Len);
		}
		else if (K == 4) {
			Fourth_Operation(Len);
		}
		else if (K == 5) {
			Fifth_Operation(Len);
		}
		else if (K == 6) {
			Sixth_Operation(Len);
		}
		else if (K == 7) {
			Seventh_Operation(Len);
		}
		else if (K == 8) {
			Eighth_Operation(Len);
		}
	}
	for (int i = 0; i < A_Size; i++) {
		for (int j = 0; j < A_Size; j++) {
			cout << A[i][j] << " ";
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