// font.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLong
{
private:
	int feet;
	int inch;
public:
	CLong()
	{
		feet = 0;
		inch = 0;
	}
	void set(int f, double i)
	{
		feet = f;
		inch = i;
	}
	void add(int e, int n)
	{
		feet = feet + e;
		inch = inch + n;
		if (inch > 11)
		{
			feet = feet + 1 * (inch / 12);
			inch = inch - (inch / 12) * 12;
		}
	}
	/*void setvalue()
	{
	if (inch> 12)
	{
	feet = feet + 1*(inch/12);
	inch = inch - (inch/12)*12;
	}
	}*/
	void value(double m)
	{
		feet = m*3.2808;
		inch = (m*3.2808 - feet) * 12;
	}
	void display()
	{
		cout << "feet=" << feet << "inch=" << inch << endl;
	}

};
int main()
{
	CLong c;
	c.set(5, 7);
	c.add(5, 6);
	c.display();
	return 0;
}