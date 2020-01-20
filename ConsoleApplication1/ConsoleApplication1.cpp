#include "pch.h"
#include <iostream>
//#include "binTree.h"
#include "DataBaseTool.h"

using namespace std;
//using namespace BaseTool;

int main()
{
	setlocale(LC_ALL, "ru");

	BaseTool::Tool diam;
	diam.set_diam(10);
	diam.get_diam();
	diam.show_diam();

	system("pause");
	return 0;
}

