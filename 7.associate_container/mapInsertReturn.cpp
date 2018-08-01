#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> m;
	pair<map<int,int>::iterator,bool> pr;
	
	m.insert(pair<int,int>(5,100));
	m.insert(pair<int,int>(4,30));
	m.insert(pair<int,int>(1,87));
	pr=m.insert(pair<int,int>(3,10));
	if(true==pr.second)
		cout<<"key:"<<pr.first->first<<", val:"<<pr.first->second<<"save!"<<endl;
	
        pr=m.insert(pair<int,int>(3,10));
	if(true==pr.second)
                cout<<"key:"<<pr.first->first<<", val:"<<pr.first->second<<"save!"<<endl;
	else
		cout<<"aleady exist!!!!!!!"<<endl;
        pr=m.insert(pair<int,int>(2,10));
        if(true==pr.second)
                cout<<"key:"<<pr.first->first<<", val:"<<pr.first->second<<"save!"<<endl;


	return 0;

}
