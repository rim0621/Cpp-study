#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<typename T>
class ObjectInfo
{
	T data;
 public:
	ObjectInfo(const T& d):data(d){}
	void Print()
	{
		cout<<"타입 : " <<typeid(data).name()<<endl;
		cout<<"크기 : " << sizeof(data)<<endl;
		cout<<"값  : " << data<<endl;
	}
};
int main()
{
	ObjectInfo <int> d1(10);
	d1.Print();
	ObjectInfo <double>d2(10.10);
	d2.Print();
	ObjectInfo <string> d3("ad");
	d3.Print();
	return 0;
}
