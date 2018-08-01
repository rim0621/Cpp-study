#include<iostream>
#include<functional>
using namespace std;

int main()
{
	binder2nd<less<int> > binder = bind2nd(less<int>(),10);
	unary_negate<binder2nd<less<int> > > negate = not1(binder);
	cout<<negate(5)<<endl; //f
	cout<<negate(20)<<endl; //t


        binder1st<less<int> > binder1 = bind1st(less<int>(),10);
        unary_negate<binder1st<less<int> > > negate1 = not1(binder1);
	cout<<negate1(5)<<endl; //t
	cout<<negate1(20)<<endl;//f

	return 0;



}
