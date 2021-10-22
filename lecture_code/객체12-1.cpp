#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional> //function // 람다함수의 closure을 사용했을때 더 이상 함수가 아니라 객체이다.

using namespace std;


// [] : closure 외부 변수를 lambda 함수 내부로 전달
// [a] : 변수 a를 pass by value로 lambda함수 내부에 전달
// [&a] : 변수 a를 pass by reference로 lambda함수 내부에 전달
// [=] : 모든 외부변수를 pass by value로 전달
// [&] : 모든 외부변수를 pass by reference로 전달
// - 사용시 주의할점: 함수에 입력으로 lambda 함수를 사용할 경우 반드시 입력 type을 function으로 // (*f)(int x, int y) 말고

// function<string(int, int double)> f: f는 입력이 (int, int, double) 이고 출력 type이 string인
// 모든 callable target을 받을 수 있다.

int evaluate2(function<int(int, int)> f, int x, int y){
    return f(x, y);
}

int main(){
    int a = 10, b = 20;
    
    [&](int x){
        cout << "x = " << x << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        a = 1000;
    }(10);
    cout << "main::a = " << a << endl;
    
    cout << evaluate2([a](int x, int y) {return x + y;}, 2, 3) << endl;
    
    function<int(int, int)> f = [](int x, int y){return x + y;};
    // closure을 사용하든 안하든 속편하게 이렇게 function객체를 사용하는게 낫다.
    
    return 0;
}




/*
int sum(int x, int y) {return x + y;}
int mult(int x, int y) {return x * y;}
int evaluate(int(*f)(int, int), int x, int y){
    return f(x, y);
}

int main(){
    cout << evaluate(&sum, 2, 3) << endl;
    cout << evaluate(&mult, 2, 3) << endl;
    
    
//    lambda함수: 이름없이 일회용으로 사용되는 함수
//    - form: [](입력변수)->리턴타입 {본문}
//    ex) sum(): [](int x, int y)->int{return x + y;}
//    cout << evaluate(&sum, 2, 3) << endl;
    cout << evaluate([](int x, int y)->int{return x + y;}, 2, 3) << endl;
    
//    simplified lambda 함수표현: [](입력변수) {본문}
//    mult(): [](int x, int y) {return x * y;}
    cout << evaluate([](int x, int y) {return x * y;}, 20, 30) << endl;
    
//    lambda 함수 생성-호출을 동시에
    [](int x, int y) {cout << x << ", " << y << endl;} (20, 30);
    
//    lambda함수로 local function 만들기(함수를 변수화)
    auto f = [](int x, int y) {return x - y;};
//    int(*f)(int, int) = [](int x, int y) {return x - y;};
    cout << f(1000, 2000) << endl;
    
    return 0;
}
*/





/*
template <class Iter>
void print(Iter iter_begin, Iter iter_end){
    Iter iter = iter_begin;
    while(iter != iter_end){
        cout << *iter << '\t';
        iter++;
    }
    cout << endl;
}

template<class Iter, typename T>
int count_value(Iter iter_begin, Iter iter_end, T key_value){
    int count = 0;
    for(Iter iter = iter_begin; iter != iter_end; iter++){
        if(*iter == key_value) count++;
    }
    return count;
}



int main(){
    vector <int> v{ 1, 2, 3, 1, 2, 3};
    list<double> I{1.1, 2.2, 3.3, 1.1, 1.1};
    string sAry[] = {"Apple", "Bear", "Carrot", "Apple", "Apple"};
    
    print(begin(v), end(v));
    print(begin(I), end(I));
    print(begin(sAry), end(sAry));
    
    cout << count_value(begin(v), end(v), 2) << endl;
    cout << count_value(begin(I), end(I), 2.2) << endl;
    cout << count_value(begin(sAry), end(sAry), "Apple") << endl;
    
    struct Point{
        int x;
        int y;
        bool operator==(const Point& pt){ // 22줄에서 == 연산자가 정의되어 있지 않기 떄문에 오버로딩 해줘야 한다.
            return (this->x == pt.x) && (this->y == pt.y);
        }
    };
    //                  pts[0]       pts[1]  pts[2]
    Point pts[] = {Point{1, 2}, Point{3, 4}, {5, 6}}; // Point 안적어줘도 가능
    cout << count_value(begin(pts), end(pts), Point{1, 2}) << endl;
    
    return 0;
}
*/
