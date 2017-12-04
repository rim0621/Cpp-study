#include<iostream>
#include<algorithm>
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

        list<int> lt1;
        lt1.push_back(100);
        lt1.push_back(200);
        lt1.push_back(300);

	copy(v.begin(),v.end(), ostream_iterator<int>(cout));
	cout<<endl;
	copy(v.begin(),v.end(), ostream_iterator<int>(cout,", "));
	cout<<endl;
	transform(lt1.begin(),lt1.end(),v.begin(),ostream_iterator<int>(cout,", "),plus<int>());
	cout<<endl;
	return 0;


}
