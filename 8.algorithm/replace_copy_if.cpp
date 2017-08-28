#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int n)
{
	return n<=30;
}

int main()
{
	vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);

	vector<int> v2(6);
	vector<int> v3(6);

	vector<int>::iterator iter_end;
	replace_copy(v1.begin(),v1.end(),v2.begin(),30,0);
	replace_copy_if(v1.begin(),v1.end(),v3.begin(),Pred,0);
	
	cout<<"v1 v2 v3"<<endl;
	for(vector<int>::size_type i=0; i<v1.size();++i)
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<< " " <<endl;
	return 0;


}
