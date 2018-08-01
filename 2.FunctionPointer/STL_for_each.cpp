#include<iostream>
#include<algorithm>	//for_each()	알고리즘 사용하기 위한 헤더
using namespace std;

//clt
void Print1(int n)
{
	cout<<n<<' ';
}
void Print2(int n)
{
	cout << n*n<<" ";
}
void Print3(int n)
{
	cout<<"int : "<<n<<endl;
}

int main()
{
	int arr[5]={10,20,30,40,50};
	for_each(arr,arr+5,Print1);
	cout<<endl;
        for_each(arr,arr+5,Print2);
        cout<<endl;
        for_each(arr,arr+5,Print3);
        cout<<endl;
	return 0;
}

