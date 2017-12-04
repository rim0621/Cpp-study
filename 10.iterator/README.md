# 반복자
* 포인pu터를 추상화한 클래스 객체.
* 포인터가 하지 못하는 더 많은 동작 가능!
#### 종류
* 일반반복자 : 전방향 읽기(istream)
* 출력반복자 : 전방향 쓰기(ostream)
* 순방향반복자 : 전방향 읽기, 쓰기
* 양방향반복자 : 양방향 읽기, 쓰기 (list, set, map...)
* 임의접근반복자 : 랜덤읽기, 쓰기 (vector, deque)
---------------------------------------------
#### X::iterator vs X::const_iterator
1. 반복자가 가리키는 원소 읽기,쓰기 
2. 읽기만!
* const X::iterator 은 반복자 자체가 const 객체 (반복자 변경X)
* X::const_iterator 은 가리키는 원소가 const 객체	
* **반복자는 *연산으로 가리키는 원소에 접근 OK, ->연산자로 가리키는 원소의 멤버에 접근 OK**
* 임의 반복자(vector, deque) : iter+=2가능
* 양방향반복자(list등) : iter+=2(X), *++iter(가능)
- [vector_randomiterANDlist.cpp](https://github.com/rim0621/Cpp-study/tree/master/10.iterator/vector_randomiterANDlist.cpp)
* 역방향반복자는 가리키는 다음 원소의 값을 참조. riter.base()를 하면 정방향 반복자로 형변환
- [iterToriter.cpp](https://github.com/rim0621/Cpp-study/tree/master/10.iterator/iterToriter.cpp) 
## 삽입 반복자
* 모든 알고리즘은 기본적으로 덮어 쓰기 모드로 동작.
1. inserter() : insert_iterator 객체를 생성. insert_iterator 객체는 컨테이너의 insert() 멤버함수를 호출해 삽입모드로 동작.
2. back_insert() : back_insert_iterator 객체 생성.  push_back() 멤버함수를 호출해서 뒤쪽에 삽입.
3. front_insert() : front_insert_iterator 객체 생성. push_front() 멤버함수 호출해서 앞쪽에..
- [inserter.cpp](https://github.com/rim0621/Cpp-study/tree/master/10.iterator/inserter.cpp)    - [back_front_inserter.cpp](https://github.com/rim0621/Cpp-study/blob/master/10.iterator/back_front_inserter.cpp)
## 입/출력 스트림 반복자
* 스트림과 연결된 반복자로 알고리즘이 스트림에 읽고 쓸 수 있게 해준다.
1. istream_iterator[T] : 입력 스트림과 연결된 반복자로 T형식의 값을 스트림에서 읽을수있다.
2. ostream_iterator[T] : 출력 스트림과 연결된 반복자로 T형식의 값을 스트림에 쓸수있다.
- [ostream_iter.cpp](https://github.com/rim0621/Cpp-study/tree/master/10.iterator/ostream_iter.cpp)    - [istrea_iter.cpp](https://github.com/rim0621/Cpp-study/tree/master/10.iterator/istrea_iter.cpp)


