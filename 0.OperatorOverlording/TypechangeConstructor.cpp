#include<iostream>
using namespace std;

class A
{};

class B
{
  public:
	B(){cout<<"B()" <<endl;}
	B(A& _a) {cout<<"B(A& _a)"<<endl;}
	B(int n) { cout<< "B(int n) "<<endl;}
	B(double d){cout<<"B(double d)"<<endl;}
};

int main()
{
 A a;
 int n=10;
 double d=5.5;
 B b;
 b=a;
 b=n;
 b=d;
 return 0;
}
