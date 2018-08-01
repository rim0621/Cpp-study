#include<iostream>
using namespace std;

class A{};

class B
{
 public:
	operator A()
	{
		cout<< " O A()"<<endl;
	}
	operator int()
	{
		cout<< "O int()"<<endl;
		return 10;
	}
	operator double()
	{
		cout<< "O double()" <<endl;
		return 5.5;
	}
};

int main()
{
	A a;
	int n;
	double d;
	B b;
	a=b;
	n=b;
	d=b;

 	a= b.operator A();
	n=b.operator int();
	d=b.operator double();
	return 0;
}
