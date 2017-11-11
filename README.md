# STL 이란
# Operator Overlarding
# Function Pointer
# Function Object
# Template
# STL
# Sequence Container
### 2중 벡터 값 넣는 방법
'''bush
int main()
{
        int x[2],y[2];
        x[0]=1;
        y[0]=0;
        x[1]=2;
        y[1]=3;
        vector<vector<int> > v;
        vector<int> tmp1;
        for(int i=0;i<2;i++)
        {
                tmp1.push_back(x[i]);
                tmp1.push_back(y[i]);
                v.push_back(tmp1);
                tmp1.clear();
        }
        for(int i=0;i<2;i++)
        {
                cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }
        return 0;
}
'''bush
# associate Container
# Algorithm

#참조
<li> 뇌를 자극하는 c++ STL (한빛미니어)
