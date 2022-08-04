#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 100001

int inOrder[MAX], postOrder[MAX];
int idx[MAX];

void preOrder(int inBegin , int inEnd , int postBegin , int postEnd)
{
	if (inBegin > inEnd || postBegin > postEnd)
		return;

	int root = postOrder[postEnd];
	cout << root << " ";

	preOrder(inBegin, idx[root] - 1, postBegin, postBegin + (idx[root] - inBegin) - 1);

	preOrder(idx[root] + 1, inEnd, postBegin + (idx[root] - inBegin), postEnd - 1);
}

void Answer()
{
	int N;
	cin >> N;

	for (int i = 0; i < N;i++)
		cin>> inOrder[i];
	for (int i = 0; i < N;i++)
		cin	>> postOrder[i];

	for (int i = 0; i < N;i++)		
		idx[inOrder[i]]		= i;
	preOrder(0,	N - 1, 0, N - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}