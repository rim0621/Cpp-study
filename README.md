# STL 이란
# c++
### 반올림 함수 
```C++
float roundFuction(float value)
{	
	return floor((value*pow(10,3)+0.5f))/pow(10,3); //3번째 자리까지 
}
```
### 소수점 출력
```C++
int main()
{
	int nCase;
	scanf("%d",&nCase);
	for(int n=0;n<nCase;n++)
	{
 		int number;
			int student[1003];
			scanf("%d",&number);
			for(int i=1;i<=number;i++)
			{
				scanf("%d",&student[i]);
			}
			cout.precision(3);		//3번째 자리까지 출력한다.
		cout<<fixed<<ratio(student,number)<<"%"<<endl;	//fixed 필수!!!
	}
	return 0;
}
```
# Operator Overlarding
# Function Pointer
# Function Object
# Template
# STL
# Sequence Container
### 2중 벡터 값 넣는 방법
<pre><code>
/*vector2D.cpp*/

int main()
{
       int x[2],y[2];
       x[0]=1;
       y[0]=0;
       x[1]=2;
       y[1]=3;
       vector<'vector<'int> > v;
       vector<'int> tmp1;		//x,y를 담을것
       for(int i=0;i<'2;i++)
       {
      	      tmp1.push_back(x[i]);	//vector = {1,0} 담고 {2,3}
 	      tmp1.push_back(y[i]);
      	      v.push_back(tmp1);	//v = {1,0},{2,3}
      	      tmp1.clear();
       }
       for(int i=0;i<'2;i++)
       {
 	      cout<<'v[i][0]<<" "<<'v[i][1]<<'endl;
       }
       return 0;
}
 
</code></pre>
# associate Container
### map 선언 & 입력 & 출력
```C++
map<int,int> m;	//(key,value)를 int형으로
m.insert(pair<int,int>(5,100)) // 키값을 5, 벨류를 100
//itertor iter 선언 후
iter->first // 키값 출력
iter->second // 벨류값 출력
```
# Algorithm

# 참조
<li> 뇌를 자극하는 c++ STL (한빛미니어)

