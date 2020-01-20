#pragma once
#include <iostream>
//DataBase of Tools for metalworking (inharitance)

using namespace std;

namespace BaseTool
{
	class Tool // ������� ����� �������� �����������
	{
	protected:
		double diam; // ������� �����������
		double lengthCut; // ����� ������� �����
		double V_c; // �������� �������
		double f_z; //������ �� ���
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
		cout << "������� ����������� = " << this->diam << "\n" << endl;
	}

}