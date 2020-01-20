#pragma once
#include <iostream>
//DataBase of Tools for metalworking (inharitance)

using namespace std;

namespace BaseTool
{
	class Tool // base class cutting tool
	{
	protected:
		double diam; // diametre of tool
		double lengthCut; // length of cutting part
		double V_c; // cutting speed
		double f_z; //tooth feed
	public:
		Tool()
		{
			diam = lengthCut = V_c = f_z = 0;
		}
		void set_diam(double diam); 
		double get_diam();
		void show_diam();

		void set_lengthCut(double lengthCut);
		double get_lengthCut();
		void show_lengthCut();

		void set_V_c(double V_c);
		double get_V_c();
		void show_V_c();

		void set_f_z(double diam);
		double get_f_z();
		void show_f_z();
	};

	class MillingCutter : public Tool
	{
	protected:
		string Brand;
	public:

	};

	class FaceMillCutter : public MillingCutter
	{

	};

	class EndMillCutter : public MillingCutter
	{

	};

	class T_shapedMillCutter : public MillingCutter
	{

	};

	//Methods of class Tool:

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

	////////////////////////////////////////////////////////////


	void BaseTool::Tool::set_lengthCut(double lengthCut)
	{
		this->lengthCut = lengthCut;
	}

	double BaseTool::Tool::get_lengthCut()
	{
		return this->lengthCut;
	}

	inline void BaseTool::Tool::show_lengthCut()
	{
		cout << "Длина режущей части = " << this->lengthCut << "\n" << endl;
	}

	/////////////////////////////////////////////////////////////

	void BaseTool::Tool::set_V_c(double V_c)
	{
		this->V_c = V_c;
	}

	double BaseTool::Tool::get_V_c()
	{
		return this->V_c;
	}

	inline void BaseTool::Tool::show_V_c()
	{
		cout << "Скорость резания по каталогу = " << this->V_c << "\n" << endl;
	}

	////////////////////////////////////////////////////////////

	void BaseTool::Tool::set_f_z(double f_z)
	{
		this->f_z = f_z;
	}

	double BaseTool::Tool::get_f_z()
	{
		return this->f_z;
	}

	inline void BaseTool::Tool::show_f_z()
	{
		cout << "Подача на зуб по каталогу = " << this->f_z << "\n" << endl;
	}

	////////////////////////////////////////////////////////////////
}