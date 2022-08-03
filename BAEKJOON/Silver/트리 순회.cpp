#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

struct Node
{
	char c;
	Node* left = NULL;
	Node* right = NULL;
};

void preorder(Node* node)
{
	cout << node->c;
	if (node->left != NULL)
	{
		preorder(node->left);
	}
	if (node->right != NULL)
	{
		preorder(node->right);
	}
}

void inorder(Node* node)
{
	if (node->left != NULL)
	{
		inorder(node->left);
	}

	cout << node->c;

	if (node->right != NULL)
	{
		inorder(node->right);
	}
}

void postorder(Node* node)
{
	if (node->left != NULL)
	{
		postorder(node->left);
	}

	if (node->right != NULL)
	{
		postorder(node->right);
	}
	
	cout << node->c;
}


void Answer()
{
	int N;
	vector<Node> node(26);
	Node* root;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		char parent, left, right;
		cin >> parent >> left >> right;
		node[parent - 'A'].c = parent;
		if (left != '.')
		{
			node[parent - 'A'].left = &node[left - 'A'];
		}
		if (right != '.')
		{
			node[parent - 'A'].right = &node[right - 'A'];
		}
	}

	root = &node[0];
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}