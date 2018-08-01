#include<iostream>

using namespace std;
void Client();

void PrintHello()	//서버
{
	cout<<"Hello!"<<endl;
	Client();
}

void Client()
{
	cout<<" i am a Client"<<endl;
}

int main()
{
	PrintHello();
	return 0;
}
