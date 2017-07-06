#include<iostream>
using namespace std;

void Print(int n)
{
	cout<<" Integer :"<<n<<endl;
}

int main()
{
	void (*pf)(int); 
	pf=Print;
	Print(10);
	pf(10);
	(*pf)(10);

	cout<< endl;
	cout<< &Print<<endl;
	cout<<pf<<endl;
	cout<<*pf<<endl;


	return 0;
}
	
