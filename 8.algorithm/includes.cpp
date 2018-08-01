#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v1;
	for(int i=1;i<=4;i++)
	{
		v1.push_back(i*10);
	}
        vector<int>v2;			//순서 다름
        for(int i=4;i>=1;i--)
        {
                v2.push_back(i*10);
        }
        vector<int>v3;
        for(int i=1;i<=2;i++)		//포함
        {
                v3.push_back(i*10);	
        }
	vector<int>v4;		// 포함+안포함
	v4.push_back(10);
	v4.push_back(100);
	if(includes(v1.begin(),v1.end(),v2.begin(),v2.end()))
		cout<<"v1 include v2"<<endl;
	else
		cout<<"v1 not include v2"<<endl;

	sort(v2.begin(),v2.end());

        if(includes(v1.begin(),v1.end(),v2.begin(),v2.end()))
                cout<<"after sorting ->  v1 include v2"<<endl;
        else
                cout<<"after sorting -> v1 not include v2"<<endl;


        if(includes(v1.begin(),v1.end(),v3.begin(),v3.end()))
                cout<<"v1 include v3"<<endl;
        else
                cout<<"v1 not include v3"<<endl;

        if(includes(v1.begin(),v1.end(),v4.begin(),v4.end()))
                cout<<"v1 include v4"<<endl;
        else
                cout<<"v1 not include v4"<<endl;


	return 0;
}
