#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

//응용 4번 문제
/*
int inputGrade(float grade) {
    cin >> grade;
    if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100){
        cout << "invalid input!!!" << endl;
        exit(EXIT_FAILURE);
    }
    else
        return (int)grade;
    
}

int* topGrade(const vector<int>& grade){
    int max;
    
    if (grade[0] > grade[1] && grade[0] > grade[2]){
        max = grade[0];
    }
    else if (grade[1] > grade[0] && grade[1] > grade[2]){
        max = grade[1];
    }
    else {
        max = grade[2];
    }
    return &max;
}

int main()
{
    vector<int> grades;
    float _grade = 0;
    for (int i = 0; i < 3; i++){
        cout <<"input " << i << "-th grade(0~100):";
        int grade = inputGrade(_grade);
        grades.push_back(grade);
    }
    
    cout << "Top Grade: " << *topGrade(grades) << endl;
    return 0;
}
*/



//응용 3번 문제
/*
void reverse(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
        v[i] = 10 - i;
}

int main()
{
    vector<int> vec(10);
    
    cout << "기본 Vector 값:" << endl;
    for (int i = 0; i < vec.size(); i++){
        vec[i] = i + 1;
        cout << ' ' << vec[i];
    }
    cout << endl;
    
    reverse(vec);
    
    cout << "함수 실행 후 Vector 값: " << endl;
    for(int elem : vec)
        cout << ' ' << elem;
    cout << endl;
    return 0;
}
*/



//응용 2번 문제
/*
void change(string* str1){
    cout << "input> ";
    cin >> *str1;
}

int main()
{
    string str = "This is default value";
    cout << "기본값 출력> " << str << endl;
    change(&str);
    
    cout << "변환된 값 출력> " << str << endl;
    return 0;
}
*/



//응용 1번 문제
/*
void power(int* x){
    *x = pow(*x, 2);
}

int main()
{
    int a;
    cout << "input> ";
    cin >> a;
    power(&a);
    cout << "제곱값> " << a << endl;
}
 */




//4번 문제
/*
bool is_prime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> primes(int lower, int upper)
{
    vector<int> v;
    for (int i = lower; i <= upper; i++){
        if (is_prime(i) == true){
            v.push_back(i);
        }
    }
    return v;
}

int main()
{
    int lower = 10, upper = 100;
    vector<int> vec;
    vec = primes(lower, upper);
    for (int elem : vec)
        cout << elem << setw(5);
    cout << endl;
    
    return 0;
}
*/



//3번 문제
/*
void print(const vector<int>& v)
{
    for (unsigned i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;
}

int main()
{
    vector<int> vec{10, 20, 30};
    print(vec);
    
    vec[0] = 100;
    vec.at(1) = 200;
    print(vec);
    
    vec.push_back(400);
    print(vec);
    
    vec.pop_back();
    print(vec);
    
    cout << endl;
    
    for (int& elem : vec)
    {
        cout << "enter an element of vector v: ";
        cin >> elem;
    }
    
    cout << endl << "[vector v]" << endl;
    
    for (int elem : vec)
    {
        cout << elem << "\t";
    }
    cout << endl;

    return 0;
}
*/



//2번 문제
/*
int sum(int x, int y) {return x + y;}
int mult(int x, int y) {return x * y;}

int evaluate(int(*func)(int, int), int x, int y)
{
    return func(x, y);
}
    
int main()
{
    int(*func)(int, int);
    func = &sum;
    cout << func(10, 20) << endl;
    func = &mult;
    cout << func(10, 20) << endl;
    
    cout << evaluate(&sum, 100, 200) << endl;
    cout << evaluate(&mult, 100, 200) << endl;

    return 0;
}
*/



//1번 문제
/*
//int &x = a; int &y = b; pass by reference
//int *x = &a; int *y = &b; pass by address

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << a << ", " << b << endl;
    swap(&a, &b);
    cout << a << ", " << b << endl;
    
    return 0;
}
*/
