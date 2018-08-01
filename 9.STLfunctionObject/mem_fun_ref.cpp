#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Point
{
	int x,y;
	public:
		explicit Point(int _x=0,int _y=0) :x(_x),y(_y){}
		void Print() const {cout<<x<<","<<y<<endl;}
		int GetX() const {return x;}
		int GetY() const {return y;}

};

int main()
{
	vector<Point> v;
	v.push_back(Point(1,1));
	v.push_back(Point(2,2));
	v.push_back(Point(3,3));
        v.push_back(Point(4,4));
        v.push_back(Point(5,5));
        v.push_back(Point(6,6));

	for_each(v.begin(),v.end(),mem_fun_ref(&Point::Print));
	return 0;
	
}
