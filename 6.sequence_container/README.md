# Sequence Container

### 2중 벡터 값 넣는 방법

```C++
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

```

### vector와 struct 사용할 때 초기화

```c++

struct Location{
        int c,r,time;
        Location(int tmpc,int tmpr): c(tmpc), r(tmpr)
        {}
};

vector<Location> lo;
lo.push_back(Location(i,j));
```
