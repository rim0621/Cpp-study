#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	v.reserve(8);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
	v.push_back(10);
        cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(20);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(30);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(40);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(50);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(59);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
	v.push_back(41);      
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(60);
        cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(70);
        cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(80);
        cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(99);
        cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
        v.push_back(111);
	cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
	return 0;
}	
