#include "pch.h"
#include <iostream>
#include "binTree.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	BinTree <int> tree;
	int count, element;

	cout << "Введите количество элементов в дереве: ";
	cin >> count;
	cout << "\n";

	cout << "Введите элементы дерева: " << endl;
	{
		cin >> element;
		tree.AddElement(element);
	}


	system("pause");
	return 0;
}

