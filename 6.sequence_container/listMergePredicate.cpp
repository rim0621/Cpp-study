#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);

	lt2.push_back(55);
	lt2.push_back(45);
	lt2.push_back(35);

	lt1.merge(lt2,greater<int>());
        list<int>::iterator iter;
	cout<<"lt1: ";
	for(iter=lt1.begin();iter!=lt1.end();++iter)
                cout<<*iter<<' ';
        cout<<endl;
	cout<<"lt2: ";
        for(iter=lt2.begin();iter!=lt2.end();++iter)
                cout<<*iter<<' ';
        cout<<endl;

	return 0;
}
