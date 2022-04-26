#include <iostream>
#include "BinaryTree.h"
#include<string>
using namespace std;


int main()
{
	BiTree b;
	string answer;
	string binaryInput;


	do
	{
		cout << "What would you like to do. Type number then press enter: " << endl;
		cout << "1. add to binary tree\n2. remove from binary tree\n3. print binary tree in alphabetical order\n4. printe binary tree in reverse alphabetical order\n5. print binary tree as a tree\n6. quit" << endl;
		cin >> answer;
		if (answer == "1")
		{
			cout << "Type the string you want to add to the binary tree:" << endl;
			cin >> binaryInput;
			b.add(binaryInput);
		}
		else if (answer == "2")
		{
			cout << "Type the string you want to add to the binary tree:" << endl;
			cin >> binaryInput;
			b.remove(binaryInput);
		}
		else if (answer == "3")
		{
			b.print();
		}
		else if (answer == "4")
		{
			b.rPrint();
		}
		else if (answer == "5")
		{
			b.tPrint();
		}
	} while (answer != "6");
}
