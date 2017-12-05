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
	lt.push_back(40);
	cout<<distance(v.begin(),v.end())<<endl;
	cout<<distance(lt.begin(),lt.end())<<endl;
	return 0;
}
