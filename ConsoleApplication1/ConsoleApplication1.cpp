#include "pch.h"
#include <iostream>
//#include "binTree.h"
#include "DataBaseTool.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	BaseTool::Tool diam;
	diam.set_diam(10.5);
	diam.get_diam();
	diam.show_diam();

	BaseTool::Tool length;
	length.set_lengthCut(5.8);
	length.get_lengthCut();
	length.show_lengthCut();

	BaseTool::Tool Vc;
	Vc.set_V_c(40.5);
	Vc.get_V_c();
	Vc.show_V_c();

	BaseTool::Tool Fz;
	Fz.set_f_z(0.25);
	Fz.get_f_z();
	Fz.show_f_z();

	system("pause");
	return 0;
}

