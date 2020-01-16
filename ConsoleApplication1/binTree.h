#pragma once

struct Node
{
	int key;
	Node *left;
	Node *right;
	Node *next_cur;
};

template <typename Tree>
class BinTree
{
	Node *root;

public:
	BinTree();
	BinTree(Node *copy, Tree elem);
	~BinTree();

	void AddElement(Node *copy, int elem);
private:

};

template<typename Tree>
BinTree<Tree>::BinTree()
{
	root = 0;
}

template<typename Tree>
BinTree<Tree>::BinTree(Node * copy, Tree elem)
{
	Node *cur = new Node();
	cur->key = elem;
	cur->left = 0;
	cur->right = 0;
}

template<typename Tree>
BinTree<Tree>::~BinTree()
{
	DeleteBinTree(root);
}

template<typename Tree>
void BinTree<Tree>::AddElement(Node * copy, int elem)
{
	if (copy == 0)
	{
		copy = new Node(elem);
		copy->key = elem;
		copy->left = copy->right = 0;
	}
	else if (elem < copy->key)
	{
		copy->left = AddElement(copy->left, elem);
	}
	else
	{
		copy->right = AddElement(copy->right, elem);
	}
}
