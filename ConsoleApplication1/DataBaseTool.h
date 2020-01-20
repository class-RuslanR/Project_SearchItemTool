#pragma once
#include <iostream>
//DataBase of Tools for metalworking (inharitance)

using namespace std;

namespace BaseTool
{
	class Tool // базовый класс режущего инструмента
	{
	protected:
		double diam; // диаметр инструмента
		double lengthCut; // длина режущей части
		double V_c; // скорость резания
		double f_z; //подача на зуб
	public:
		Tool()
		{
			diam = lengthCut = V_c = f_z = 0;
		}
		void set_diam(double diam); 
		double get_diam();
		void show_diam();
	};

	void BaseTool::Tool::set_diam(double diam)
	{
		this->diam = diam;
	}

	double BaseTool::Tool::get_diam()
	{
		return this->diam;
	}

	inline void BaseTool::Tool::show_diam()
	{
		cout << "Диаметр инструмента = " << this->diam << "\n" << endl;
	}

}