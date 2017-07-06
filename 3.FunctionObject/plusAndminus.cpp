#include<iostream>
#include<functional>
using namespace std;

struct Plus
{
	int operator()(int a,int b)
	{
		return a+b;
	}	
};
struct Minus
{
	int operator()(int a, int b)
	{
		return a-b;
	}
};
int main()
{
	cout<<Plus()(1,2)<<endl;
	cout<<Minus()(1,2)<<endl;
	cout<<plus<int>()(1,2)<<endl;
	cout<<minus<int>()(1,2)<<endl;
	return 0;
}
