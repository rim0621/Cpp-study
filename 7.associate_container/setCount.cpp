#include<iostream>
#include<set>
using namespace std;
//log N
int main()
{
	set<int> s;
	s.insert(40);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(10);
	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<< *iter<<" ";
	cout<<endl;

	cout<<s.count(40)<<endl; //only one becouse 중복no
	cout<<s.count(100)<<endl;
	//cout<<s.count()<<endl; impossible
	return 0;
}
