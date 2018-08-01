#include<iostream>
#include<string>
using namespace std;
template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
	while(begin!=end)
	{
		pf(*begin++);
	}
}
/*
void PrintInt(int data)
{
	cout<<data<<" ";
}
void PrintString(string data)
{
        cout<<data<<" ";
}*/
template<typename T>
void Print(T data)
{
        cout<<data<<" ";
}




int main()
{
	int arr[5]={1,2,3,4,5};
	//For_each(arr,arr+5,PrintInt);
	For_each(arr,arr+5,Print<int>);
	cout<<endl;
	
	string sarr[3]={"ab","abf","sdfsa"};
	//For_each(sarr,sarr+3,PrintString);
	For_each(sarr,sarr+3,Print<string>);
	return 0;
}
