// operate.cpp : 定义控制台应用程序的入口点。
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
	CFeet operator-(CFeet & objf);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe-(in/12)*12;
	inches =in ;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
/*CFeet CFeet::add(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	temp.display();
	return temp;
}*/
CFeet CFeet::operator-(CFeet &objf)
{
	CFeet temp;
	inches = feet * 12 + inches;
	objf.inches = objf.feet * 12 + objf.inches;
	sum = inches - objf.inches;
	feet = sum / 12;
	inches = sum % 12;
	return temp;
}
int main()
{
	CFeet A, B,C;
	A.setvalue(1, 1);
	B.setvalue(2, 2);
	C = A - B;
	C.display();
    return 0;
}

