#include <iostream>
#include <iomanip>
#include <locale>

using namespace std; // std::를 생략하겠다


/*
int main(){
    int row = 1, col = 1;
    int n;
    cin >> n;
    while( row <= n){
        while(col <= n){
            int val = row * col;
            cout << setw(4) << val;
            col++;
        }
        cout << '\n'; // endl(C++에서 사용)과 '\n'(C에서 사용) 은 같은 기능
        row++;
        col = 1;
    }
}
 */


/*
int main()
{
    int sum = 0, n;
    int i = 2;
    cin >> n;
    cout.imbue(locale(""));
    while(i <= n){
        sum += i; // sum = sum + i;
        cout << setw(4) << i << setw(12) << sum << endl;
        i += 2;
    }
    return 0;
}
*/
 


/*
// if, else-if , else 순서로 괄호안 조건들을 탐색,
// true조건을 가지는 block을 수행후 전체 조건문을 탈출
// 1) if : 처음에 위치, 단독으로 사용
// 2) else : 상위 조건문이 모두 거짓일 경우 자동으로 수행(default)
// 3) block안 문장이 하나일 경우 중괄호{} 생략 가능
int main(){
    int score;
    char grade = NULL; //'', '\0'
    cout << "Enter the score [0-100]: ";
    cin >> score;
    
    if(0 <= score && score <= 100){
        if(score >= 90)
            grade = 'A';
        else if(score >= 80)
            grade = 'B';
        else if(score >= 70)
            grade = 'C';
        else
            grade = 'F';
        }
        cout << "Grade is " << grade << endl;
    }
    else
        cout << "invalid score" << endl;
 
    return 0;
}
 */


/*
int main()
{
    bool a = true;
    bool b = (10 >= 5);
    bool c = 1000;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}
 */



/*
void swap(int a, int b): pass by value: 복사에 의한 값 전달
void swap(int& a, int& b): pass by reference: 참조에 의한 값 전달
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 1000;
    cout << x << '\t' << y << endl;
    swap(x, y);
    cout << x << '\t' << y << endl;
    
    return 0;
}
*/


