#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;

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

	vector<int>::iterator viter(v.begin());
	list<int>::iterator liter=lt.begin();

	cout<<*viter<<"  "<<*liter<<endl;

	advance(viter,2);	//30
	advance(liter,1);	//20

        cout<<*viter<<"  "<<*liter<<endl;
		

	return 0;


}
