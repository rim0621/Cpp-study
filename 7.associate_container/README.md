# associate Container
#### map 선언 & 입력 & 출력
```C++
map<int,int> m;	//(key,value)를 int형으로
m.insert(pair<int,int>(5,100)) // 키값을 5, 벨류를 100
//itertor iter 선언 후
iter->first // 키값 출력
iter->second // 벨류값 출력
```
#### map Remove
```C++
m.erase(key); // 맵에서 해당 키와 벨류 삭제
```

