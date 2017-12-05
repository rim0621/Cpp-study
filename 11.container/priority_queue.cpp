#include<iostream>
#include<deque>
#include<queue>
using namespace std;

int main()
{

	priority_queue<int> pq1;
	pq1.push(30);
	pq1.push(10);
	pq1.push(40);
	pq1.push(20);
	while(!pq1.empty())
	{
		cout<<pq1.top()<<endl;
		pq1.pop();
	}
	cout<<"=============="<<endl;

        priority_queue<int,deque<int>,greater<int> > pq2;
        pq2.push(30);
        pq2.push(10);
        pq2.push(40);
        pq2.push(20);
	pq2.push(30); //  중복 ok / set은 중복안되는데
    while(!pq2.empty())
        {
                cout<<pq2.top()<<endl;
                pq2.pop();
        }
	return 0;
}
