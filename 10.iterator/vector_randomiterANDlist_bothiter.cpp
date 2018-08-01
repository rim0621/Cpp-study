#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Point
{
	int x;
	int y;
  public:
	explicit Point(int _x=0, int _y=0):x(_x),y(_y){}
	void Print() const { cout<<x<<" , "<<y<<endl;} 
};


int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);

	vector<int>::iterator viter=v.begin();
	list<int>::iterator liter=lt.begin();
	
	cout<<*viter<<endl;
	cout<<*liter<<endl;
	viter+=2;	//임의 접근 반복자는 가능
	//liter+=2 ; //양방향 반복자는 불가능
	cout<<*viter<<endl;
	

	vector<Point> ptVector;
	ptVector.push_back(Point(2,5));

	list<Point> ptList;
	ptList.push_back(Point(2,5));

	vector<Point>::iterator ptV=ptVector.begin();
	list<Point>::iterator ptL=ptList.begin();

	ptV->Print();
	ptL->Print();
	return 0;
}
