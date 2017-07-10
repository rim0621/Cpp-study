#include<iostream>

using namespace std;

template <typename T>
void Print(T a, T b)
{
	cout<<a<<" "<<b<<endl;
}



int main()
{
	Print(20,10);
	Print(12.411,12.121);
	Print("ABC","BDD");
	return 0;
}

