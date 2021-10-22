#include <iostream>
#include <iomanip>
using namespace std;


bool find_char(const char* s, char ch){
    while(*s != '\0'){
        if(*s == ch)
            return true;
        s++;
    }
    return false;
}


// 문자열(const char* s = "oop")
// s = {'o', 'o', 'p', '\0'} -> 실제론 'o'가 아니고 o에대한 아스키코드로 저장되어있음
int main(){
    // int: 정수
    // const char*: 문자열
    const char* phrase = "this is a phrase";
    // 'A': 65
    // 'a': 97(+32)
    
    cout << phrase << endl; //원래는 배열의 시작주소값이 나와야 하지만 편의상 문자열 자체가 나오도록 설계
    
    for(char ch = 'a'; ch <= 'z'; ch++){
        cout << ch << " is ";
        if(!find_char(phrase, ch))
            cout << "NOT";
        cout << " in (" << phrase << ")" << endl;
        // a is in (this is a phrase)
        // b is NOT in (this is a phrase)
    }
    
    return 0;
}



/*
void print(int** mat, int nRow, int nCol){
    for(int row = 0; row < nRow; row++){
        for(int col = 0; col < nCol; col++){
            cout << setw(4) << mat[row][col];
        }
        cout << endl;
    }
}

int main(){
//    vector<vector<int>> m(2, vector<int>(3));
//    int matrix[2][3]; //2x3 matrix
    
    int nRow = 2, nCol = 3;
    int** matrix2 = new int*[nRow];
    for(int row = 0; row < nRow; row++){
        matrix2[row] = new int[nCol];
    }
    
    matrix2[0][0] = 1; matrix2[0][1] = 2; matrix2[0][2] = 3;
    matrix2[1][0] = 4; matrix2[1][1] = 5; matrix2[1][2] = 6;
    
    print(matrix2, nRow, nCol);
    
    for(int row = 0; row < nRow; row++){
        delete[] matrix2[row];
    }
    delete[] matrix2;
 
    return 0;
}
*/




/*
// 정적 배열(static array): 프로그램 동작중
// 동적 배열(dynamic array): 프로그램이 동작중 할당/해제 가능

void get_data(int* begin, int* end){
    for(int* curr = begin; curr != end; curr++)
        cin >> *curr;
}

void print(int* begin, int* end){
    for(int* curr = begin; curr != end; curr++)
        cout << *curr << endl;
    cout << endl;
}


int main(){
    const int size = 3;
    int list[size] = {10, 20, 30};
    
    int length;
    cin >> length;
    int* list2 = new int[length];
    
    int* begin = list2;
    int* end = list2 + length;
    
    get_data(begin, end);
    print(begin, end);
    
    return 0;
}
*/
