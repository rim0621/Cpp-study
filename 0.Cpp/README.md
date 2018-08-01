# C++

> C++ 기술서

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
### 2차원 동적할당

```c++
int **arr = new int *[r];
for(int i=0;i<r;i++)
{
	arr[i] = new int[c];
	memset(arr[i],'init',sizeof(int)* c);
}

//해제

for(int i = 0; i < sizeY; ++i) {
	delete [] arr[i];
}
 delete [] arr;
```
