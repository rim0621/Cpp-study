#include<iostream>
#include<functional>
using namespace std;
int main()
{
	less<int> oLess;
	binary_negate<less<int> > negate=not2(less<int>());
	cout<<negate(5,10)<<endl;
	cout<<negate(20,10)<<endl;
	return 0;
}
