// operate.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & objf);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	temp.display();
	return temp;
}
int main()
{
	CFeet A, B;
	A.setvalue(10, 5);
	B.setvalue(10, 6);
	A.add(B);
    return 0;
}

