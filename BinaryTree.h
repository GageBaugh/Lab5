#ifndef BinaryTree
#define BinaryTree
#include<iostream>
#include<string>
using namespace std;

struct Node
{
	Node* left;
	Node* right;
	
	string item;
};

class BiTree
{
public:
	BiTree();
	~BiTree();

	void add(string item_);
	// function: adds an item to the binary tree
	// pre: binary tree is initialized
	// post: item is added to the binary tree

	void remove(string item_);
	// function: removes an item from the binary tree
	// pre: binary tree is initialized
	// post: item is removed from the binary tree

	void print();
	// function: prints all items in the binary tree in alphabetical order
	// pre: binary tree is initialized
	// post: all items are printed to the screen in alphabetical order

	void tPrint();
	// function: prints all in the binary tree as a tree
	// pre: binary tree is initialized
	// post: all items are printed to the screen as a tree

	void rPrint();
	// function: prints all items in the binary tree in reverse alphabetical order
	// pre: binary tree is initialized
	// post: all items are printed to the screen in reverse alphabetical order

private:
	Node* root;
	Node* pos;

	string toLower(string value);
	// function: returns if string1 comes before string2 in the alphabet
	// pre: string1 and string2 are strings
	// post: a boolean value is returned

	void printHelp(Node* curNode);
	// function: prints all items in the binary tree in alphabetical order
	// pre: binary tree is initialized
	// post: all items are printed to the screen in alphabetical order

	void tPrintHelp(Node* curNode, int space = 0);
	// function: prints all in the binary tree as a tree
	// pre: binary tree is initialized
	// post: all items are printed to the screen as a tree

	void rPrintHelp(Node* curNode);
	// function: prints all items in the binary tree in reverse alphabetical order
	// pre: binary tree is initialized
	// post: all items are printed to the screen in reverse alphabetical order

};

#endif