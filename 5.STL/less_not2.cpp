#include<iostream>
#include<functional> //not2
using namespace std;
int main()
{
	cout<<less<int>()(10,30)<<endl;
	cout<<less<int>()(20,20)<<endl;
	cout<<less<int>()(30,10)<<endl;
	cout<<"-----"<<endl;
        cout<<not2(less<int>())(10,30)<<endl;
        cout<<not2(less<int>())(20,20)<<endl;
        cout<<not2(less<int>())(30,10)<<endl;
	less<int> l;
	 cout<<not2(l)(10,30)<<endl;
        cout<<not2(l)(20,20)<<endl;
        cout<<not2(l)(30,10)<<endl;
	return 0;
}
