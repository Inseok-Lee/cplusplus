#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
using namespace std;

//응용5번 문제
/*
 int uclid(int x, int y) {
     if (x % y == 0) {
         return y;
     }
     else {
         int r = x % y;
         uclid(y, r);
     }
 }



 int main() {
     int x, y;
     cout << "x = ";
     cin >> x;
     cout << "y = ";
     cin >> y;
     cout << uclid(x, y) << endl;
     return 0;
 }

 */


//응용4번 문제
/*
 int main() {
     int num;
     cout << "단 수를 입력하세요: ";
     cin >> num;
     if (num >= 1 && num <= 9) {
         int x = 1;
         while (x < 10) {
             cout << num << "*" << x << " = " << num * x << endl;
             x++;
         }
     }
     else if (num == -1)
         cout << "종료합니다." << endl;
     
     else
         cout << "1 부터 9까지의 정수를 입력해주세요." << endl;
     
     return 0;
 }

 */



//응용3번 문제
/*
 int main() {
     int num;
     int sum = 0;
     int x = 1;
     cout << "number : ";
     cin >> num;
     while (x <= num) {
         if ((x % 2 != 0) && (x % 3 != 0)) {
             sum += x;
         }
         x++;
     }
     cout << "sum : " << sum <<endl;
     return 0;
 }

 */

//응용2번 문제
/*
 int main() {
     int sum = 0;
     int num;
     int x = 1;
     cout << "number : ";
     cin >> num;
     while (x <= num) {
         sum += x;
         x++;
     }
     cout << "Sum of 1 to " << num << " = " << sum << endl;
     return 0;
 }
 */

//응용1번 문제
/*
 int main() {
     int count = 1, num;
     while (count <= 5) {
         cout << count << "번째 정수 : ";
         cin >> num;
         if (num % 2 == 0)
             cout << num << "은(는) 짝수입니다." << endl;
         else
             cout << num << "은(는) 홀수입니다." << endl;
         count++;
     }
 }
*/



//6번 문제
/*
 int main() {
     char key;
     cout << "Enter a key (p or q): ";
     cin >> key;
     switch (key) {
         case 'P':
         case 'p':
             cout << "Pause" << endl;
             break;
         case 'Q':
         case 'q':
             cout << "Quit" << endl;
             break;
         default:
             cout << "Default" << endl;
             break;
     }
     return 0;
 }
 */



//5번 문제
/*
 int main() {
     int n, m;
     cout << "Enter n for n x m matrix: ";
     cin >> n;
     cout << "Enter m for n x m matrix: ";
     cin >> m;
     
     int row = 1;
     while (row <= n) {
         int column = 1;
         while (column <= m) {
             int num = column * row;
             cout << "\t" << num;
             column++;
         }
         cout << endl;
         row++;
     }
 return 0;
 }

 */

//4-2번 문제
/*
 int main() {
     int num;
     do {
         cout << "Enter the number (0, 10]: ";
         cin >> num;
     } while (num <= 0 || num > 10);
     cout << "Success!" << endl;
     return 0;
 }
 */


//4-1번 문제
/*
 int main() {
     int num;
     
     while (true) {
         cout << "Enter the number (0, 10]: ";
         cin >> num;
         if (num > 0 && num <= 10) {
             break;
         }
     }
     cout << "Success!" << endl;
     return 0;
 }

 */


//3번 문제
/*
 int main() {
     int row = 1;
     while (row <= 10) {
         int column = 1;
         while (column <= 10) {
             int num;
             if (row == column) {
                 num = 1;
             }
             else {
                 num = 0;
             }
             cout << setw(4) << num;
             column++;
         }
         cout << endl;
         row++;
     }
     return 0;
 }

 */



//2번 문제
/*
 int main() {
     int num = 1;
     int count = 1;
     cout.imbue(locale(""));
     while (count <= 20) {
         num = pow(2, count);
         cout << count << '\t' << setw(10) << num << '\n';
         count++;
     }
    return 0;
 }
 */



//1번 문제
/*
int main()
{
    char grade = 'X';
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if (score >= 90 && score <= 100) {
        char grade = 'A';
        cout << "Your grade is " << grade << endl;
    }
    else if (score >= 80 && score < 90){
        char grade = 'B';
        cout << "Your grade is " << grade << endl;
    }
    else if (score >= 70 && score < 80){
        char grade = 'C';
        cout << "Your grade is " << grade << endl;
    }
    else if (score >= 60 && score < 70){
        char grade = 'D';
        cout << "Your grade is " << grade << endl;
    }
    else if (score < 60 && score >= 0){
        char grade = 'F';
        cout << "Your grade is " << grade << endl;
    }
    else{
        cout << "The score (" << score << ") is invalid" << endl;
    }
    
    return 0;
}
*/
