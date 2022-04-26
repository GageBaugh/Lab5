#include "BinaryTree.h"

BiTree::BiTree()
{
	pos = root = nullptr;
}

BiTree::~BiTree()
{
}

void BiTree::add(string item_)
{
	pos = root;
	Node* temp = new Node();
	temp->item = item_;
	if (root == nullptr)
	{
		root = temp;
	}
	else
	{
		while (true)
		{
			if (pos->item == item_)
			{
				cout << "Error item already in tree" << endl;
				return;
			}
			else if (toLower(pos->item) > toLower(item_))
			{
				if (pos->right == nullptr)
				{
					pos->right = temp;
					return;
				}
				else
				{
					pos = pos->right;
				}
			}
			else
			{
				if (pos->left == nullptr)
				{
					pos->left = temp;
					return;
				}
				else
				{
					pos = pos->left;
				}
			}
		}
	}
}

string BiTree::toLower(string value)
{
	for (char& c : value)
	{
		c = tolower(c);
	}
	return value;
}

void BiTree::printHelp(Node* curNode)
{
	if (curNode != nullptr)
	{
		printHelp(curNode->right);
		cout << curNode->item << endl;
		printHelp(curNode->left);
	}
}

void BiTree::tPrintHelp(Node* curNode, int space)
{
	if (curNode != nullptr)
	{
		space += 1;
		tPrintHelp(curNode->right, space);
		for (int i = 1; i < space; i++)
			cout << "\t";
		cout << curNode->item << endl;
		tPrintHelp(curNode->left, space);
	}
}

void BiTree::rPrintHelp(Node* curNode)
{
	if (curNode != nullptr)
	{
		rPrintHelp(curNode->left);
		cout << curNode->item << endl;
		rPrintHelp(curNode->right);
	}
}

void BiTree::remove(string item_)
{
	Node* prev = nullptr;
	pos = root;
	if (root == nullptr)
	{
		cout << "Error binary tree is empty" << endl;
		return;
	}
	else
	{
		while (true)
		{
			if (pos == nullptr)
			{
				cout << "Error item not in binary tree" << endl;
				return;
			}
			else if (pos->item == item_)
			{
				while (true)
				{
					if (pos->right != nullptr)
					{
						pos->item = pos->right->item;
						prev = pos;
						pos = pos->right;
					}
					else if (pos->left != nullptr)
					{
						pos->item = pos->left->item;
						prev = pos;
						pos = pos->left;
					}
					else
					{
						prev->right = nullptr;
						prev->left = nullptr;
						delete(pos);
						return;
					}
				}
			}
			else if (toLower(pos->item) > toLower(item_))
			{
				prev = pos;
				pos = pos->right;
			}
			else if (toLower(pos->item) < toLower(item_))
			{
				prev = pos;
				pos = pos->left;
			}
		}
	}
}

void BiTree::print()
{
	pos = root;
	printHelp(pos);
}

void BiTree::tPrint()
{
	pos = root;
	tPrintHelp(pos);
}

void BiTree::rPrint()
{
	pos = root;
	rPrintHelp(pos);
}
