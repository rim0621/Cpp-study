#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Plus(int left,int right)
{
	return left+right;
}
int Plus1(int n1,int n2, int n3)
{
	return n1+n2+n3;
}

int main()
{
	vector<int> v1,v2,v3,tmp(10);
	v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40); //갯수가 많으면.. +0이 된다.

        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);

//        v3.push_back(100);
//        v3.push_back(100);
//        v3.push_back(100);
	  //3개는 에러가 뜸... 
	
	transform(v1.begin(),v1.end(),v2.begin(),tmp.begin(),Plus);
	for(vector<int>::size_type i=0; i<tmp.size();i++)
		cout<<tmp[i]<<" ";
	cout<<endl;

	return 0;

}	
