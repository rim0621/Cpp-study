#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
  public:
	Point(int _x=0, int _y=0):x(_x),y(_y){}
	void Print() const {cout<<x<<","<<y<<endl;}
};

class PointPtr
{
	Point *ptr;
  public:
	PointPtr(Point *p):ptr(p){}
	~PointPtr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr;
	}
	Point& operator*() const
	{
		return *ptr;
	}
};

int main()
{
	PointPtr p1=new Point(2,3);
	PointPtr p2=new Point(5,5); 
	
	p1->Print();
	p2->Print();
	(*p1).Print();
	(*p2).Print();
	
	return 0;
}

