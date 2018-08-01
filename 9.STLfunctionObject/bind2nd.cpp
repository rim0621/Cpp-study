#include<iostream>
#include<functional>
using namespace std;

int main()
{
	binder2nd<less<int> > binder=bind2nd(less<int>(),10);
	cout<<binder(5)<<endl;
	cout<<binder(20)<<endl;
	return 0;
}
