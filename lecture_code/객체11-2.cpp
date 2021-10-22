#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

// 중요: Obj는 반드시 x, y 맴버 변수를 가지고 있어야 하면, operator<<를 friend 선언해야 함
template<class Obj>
ostream& operator<<(ostream& cout, const Obj& pt){
    cout << pt.x << ", " << pt.y;
    return cout;
}


/*
// Iterator: pointer-like object (container의 element 위치)
//  - 주요 함수: begin(v), end(v)
//  - 주요 연산자: iter++, *iter, iter1 != iter2
//  - 추가 연산자: iter--, iter += 5, iter -= 5 등
//              (container에 따라 존재유무가 다름)


template<class Iter>
void print(Iter iter_begin, Iter iter_end){
    for(auto iter = iter_begin; iter != iter_end; iter++){
        cout << *iter << '\t';
    }
    cout << endl;
}


template<class Iter, class T>
int count_value(Iter iter_begin, Iter iter_end, T key_value){
    int count = 0;
    for(Iter iter = iter_begin; iter != iter_end; iter++){
        if(*iter == key_value) count++;
    }
    return count;
}


int main(){
    // iterator와 template을 합치면: container-generic function
    vector<int> v{1, 2, 3, 2, 2, 2};
    list<double> I{1.1, 2.2, 3.3, 1.1};
    string sAry[] = {"Apple", "Bear", "Carrot", "Apple", "Apple"};
    
    print(begin(v), end(v));
    print(begin(I), end(I));
    print(begin(sAry), end(sAry));
    
    cout << count_value(begin(v), end(v), 2) << endl;
    cout << count_value(begin(I), end(I), 1.1) << endl;
    cout << count_value(begin(sAry), end(sAry), "Apple") << endl;
    
    
    return 0;
}
 */


/*
int main(){
    vector<int> v{1, 2, 3};
    
    auto iter_begin = begin(v); // v.begin() 도 가능
    auto iter_end = end(v); // v.end() 도 가능
    for(auto iter = iter_begin; iter != iter_end; iter++){
        cout << *iter << '\t';
    }
    cout << endl;
    
    return 0;
}
*/


/*
int main(){
    int ary[] = {1, 2, 3};
    int* begin = ary;
    int* end = ary + 3;
    
    for(int* curr = begin; curr != end; curr++){
        cout << *curr << '\t';
    }
    cout << endl;
    
    return 0;
}
*/



/*
// class template
template<typename T>
class Point{
private:
    T x;
    T y;
public:
    Point(T _x, T _y);
    void setXY(T _x, T _y);
    T getX() const;
    T getY() const;
    void print() const;
};

template<typename T>
Point<T>::Point(T _x, T _y) : x(_x), y(_y){}

template<typename T>
void Point<T>::setXY(T _x, T _y) {x = _x; y = _y;}

template<typename T>
T Point<T>::getX() const {return x;}

template<typename T>
T Point<T>::getY() const {return y;}

template<typename T>
void Point<T>::print() const{cout << x << ", " << y << endl;}

int main()
{
    Point<int> pt1(1, 2);
    Point<double> pt2(1.1, 2.2);
    Point<string> pt3("ABC", "XYZ");
    pt1.print();
    pt2.print();
    pt3.print();
    
    return 0;
}
*/




/*
// generic function
template<typename T, class U>
bool less_than(const T& x, const U& y) { return x < y;}

template<class T>
T sum(const vector<T>& v){
    T result = 0;
    for(T elem : v)
        result += elem;
    return result;
}

int main(){
    cout << less_than(2, 3) << endl;
    cout << less_than(2, 2.7) << endl; // T <- int, U <- double
    
    string s1 = "ABC";
    string s2 = "X";
    
    cout << less_than(s1, s2) << endl;
    
    vector<int> v1{1, 2, 3};
    vector<double> v2{1.1, 2.2, 3.3};
    
    cout << sum(v1) << endl;
    cout << sum(v2) << endl;
    
    return 0;
}
*/
