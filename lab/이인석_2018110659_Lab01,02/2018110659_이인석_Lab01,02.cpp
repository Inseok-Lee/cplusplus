#include <iostream>
using namespace std;

/* 1번 문제
int main()
{
    int x, y;
    x = 10;
    y = 20;
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}
*/


/* 2번 문제
int main()
{
    unsigned short siX;
    unsigned iX;
    long liX;
    long long lliX;
    cout << "sizeof(siX):" << sizeof(siX) << endl;
    cout << "sizeof(iX):" << sizeof(iX) << endl;
    cout << "sizeof(liX):" << sizeof(liX) << endl;
    cout << "sizeof(lliX):" << sizeof(lliX) << endl;
    
    return 0;
}
*/


/* 3번 문제
int main()
{
    cout << "(7 == 5):" << (7 == 5) << endl;
    cout << "(7 >= 5):" << (7 >= 5) << endl;
    cout << "(7 != 5):" << (7 != 5) << endl;
    cout << "(7 <= 5):" << (7 <= 5) << endl;
    cout << "(7 >= 5 ? 100 : -100):" << (7 >= 5 ? 100 : -100) << endl;
    
    return 0;
}
*/


/* 4번째 문제
int main()
{
    const float PI = 3.14;
    char ch1 = 'A';
    char ch2 = 'A' + 32;
    
    cout << PI << endl;
    cout << ch1 << endl;
    cout << ch2 << endl;
    
    return 0;
}
 */


/* 5번 문제
int main()
{
    int x, y, sum, mult;
    float div;
    cin >> x >> y;
    sum = x + y;
    mult = x * y;
    div = float(x) / y;
    cout << x << '\t' << y << endl;
    cout << "x + y = " << sum << endl;
    cout << "x * y = " << mult << endl;
    cout << "x / y = " << div << endl;
    
    return 0;
}
 */


/* 응용 1번 문제
int main()
{
    cout << "My name is 이인석" << endl;
    
    return 0;
}
 */


/* 응용 2번 문제
int main()
{
    int A, B;
    cout << "Please enter two integer values: ";
    cin >> A >> B;
    
    cout << A << " + " << B << " = " << A + B << endl;
    cout << A << " - " << B << " = " << A - B << endl;
    cout << A << " * " << B << " = " << A * B << endl;
    cout << A << " / " << B << " = " << float(A) / B << endl;
    cout << A << " % " << B << " = " << A % B << endl;
    
    return 0;
}
*/


/* 응용 3번 문제
int main()
{
    int i1 = 2;
    int i2 = 5;
    int i3 = -3;
    double d1 = 2.0;
    double d2 = 5.0;
    double d3 = -0.5;
    
    cout << i1 + (i2 * i3) << endl;
    cout << i1 * (i2 + i3) << endl;
    cout << i1 / (i2 + i3) << endl;
    cout << i1 / i2 + i3 << endl;
    cout << 3 + 4 + 5 / 3 << endl;
    cout << (3 + 4 + 5) / 3 << endl;
    cout << d1 + (d2 * d3) << endl;
    cout << d1 + d2 * d3 << endl;
    cout << d1 / d2 - d3 << endl;
    cout << d1 / (d2 - d3) << endl;
    cout << d1 + d2 + d3 / 3 << endl;
    cout << (d1 + d2 + d3) / 3 << endl;
    
    return 0;
}
 */


/* 응용 4번 문제
int main()
{
    int A, B, temp;
    
    cout << "Please enter two integer values: " << endl;
    cout << "A : ";
    cin >> A;
    cout << "B : ";
    cin >> B;
    
    temp = A;
    A = B;
    B = temp;
    
    cout << "value of A is : " << A << endl;
    cout << "value of B is : " << B << endl;
    
    return 0;
}
*/


/* 응용 5번 문제
int main()
{
    float fahrenheit, celsius;
    cout << "Please enter Farenheit value: ";
    cin >> fahrenheit;
    
    celsius = float(5) / 9 * (fahrenheit - 32);
    
    cout << "Celsius value is " << celsius << endl;
    
    return 0;
}
*/

