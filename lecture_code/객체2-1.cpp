#include <iostream> // cin, cout
#include <cmath>
using namespace std;



void applePrice(int a = 1000); // 선언부 구현부를 나눈다면 default argument는 선언부에만 있어야함

int main()
{
    applePrice();
    applePrice(2000);
    applePrice();
    applePrice();
    applePrice();
    
    return 0;
}

void applePrice(int a)
{
    cout << "Price of apple : " << a << endl;
}



/*
int main()
{
    double value = 5.0;
    cout << sqrt(value) << endl;
    cout << exp(value) << endl;
    cout << log(value) << endl; // 자연로그
    cout << cos(value) << endl; //
    
    return 0;
}
*/


/*
// 선언
int sum(int a, int b);
int subt(int a, int b);
int mult(int a, int b);
float divi(int a, int b); // div는 이미 정의된 함수임, 사용불가 (keyword)
int get_data();

int main() // void를 쓰지 않는 이유? -> int로 쓰는게 전통적
{
    int x, y;
    x = get_data();
    y = get_data();
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x + y = " << sum(x, y) << endl; // 호출
    cout << "x - y = " << subt(x, y) << endl;
    cout << "x * y = " << mult(x, y) << endl;
    cout << "x / y = " << divi(x, y) << endl;
    
    return 0;
}

// 정의
int sum(int a, int b){
    return a + b;
}

int subt(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

float divi(int a, int b){
    return float(a) / b;
    // return 1.0 * a / b; -> 교수님 선호
    // return (float)a / b; -> int보다 정밀도가 높은 float가 나온다
}

int get_data(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    return a;
}
 */



/*
// 1. 선언 (declare)
int square(int a); // 원형(prototype)

int main()
{
    int x; // 선언
    x = 5; // 초기화
    cout << square(x) << endl;
    
    
    return 0;
}

// 2. 정의 (define, 구현)
int square(int a){
    return a * a;
}
 */
