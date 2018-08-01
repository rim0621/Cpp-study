#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);

        list<int> lt2;
        lt2.push_back(1);
        lt2.push_back(2);
        lt2.push_back(3);

	copy(v.begin(),v.end(),back_inserter<list<int> >(lt1));
	copy(v.begin(),v.end(),front_inserter<list<int> >(lt2));
		
	list<int>::iterator iter2=lt2.begin();
	for(list<int>::iterator iter1=lt1.begin();iter1!=lt1.end();iter1++)
	{
		cout<< *iter1<<"      "<<*iter2<<endl;
		iter2++;
	}
	return 0;
}
