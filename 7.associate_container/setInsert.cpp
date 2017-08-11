#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(10);
	s.insert(60);
	s.insert(40);
	s.insert(20);
	s.insert(100);

	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;

	s.insert(33);

        
        for(iter=s.begin();iter!=s.end();++iter)
                cout<<*iter<<' ';
        cout<<endl;


	return 0;	

}
