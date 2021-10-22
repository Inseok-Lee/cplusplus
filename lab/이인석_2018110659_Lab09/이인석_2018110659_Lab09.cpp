#include <iostream>
#include <vector>
#include <iomanip>
#include <random>
#include <time.h>

using namespace std;


//응용 4번 문제
int** buildTable(int n){
    int** table = new int*[n];
    for(int i = 0; i < n; i++){
        table[i] = new int[n];
        for(int j = 0; j < n; j++)
            table[i][j] = 0;
    }
    return table;
}

void make_identity_matrix(int** table, int n){
    cout << "Output:" << endl;
    for(int i = 0; i < n; i++)
        table[i][i] = 1;
}

void printTable(int** table, int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++)
            cout << table[row][col] << '\t';
        cout << endl;
    }
}

int main()
{
    int n = 0;
    cout << "N을 입력하시오: ";
    cin >> n;
    if(n < 1){
        cout << "\n행렬을 생성할 수 없습니다.\n" << endl;
        exit(EXIT_FAILURE);
    }
    
    int** table = buildTable(n);
    make_identity_matrix(table, n);
    printTable(table, n);
    
    for(int i = 0; i < n; i++)
        delete[] table[i];
    delete[] table;
    
    return 0;
}



//응용 3번 문제
/*
void set_and_print(int* begin, int* end, int num){
    for(int* curr = begin; curr != end; curr++){
        *curr = rand() % num + 1;
        cout << *curr << " ";
    }
    cout << endl;
}

bool searchDupl(int* arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    while(true){
        int num;
        int size;
        cout << "Please enter a number: ";
        cin >> num;
        
        if(num < 2){
            cout << "Wrong number!!!" << endl;
            exit(404);
        }
        
        size = int(num/2);
        cout << "Size of random array: " << size << endl;
        cout << "[ Array ]" << endl;
        
        int* arr = new int[size];
        int* begin = arr;
        int* end = arr + size;
        
        set_and_print(begin, end, num);
    
        if(searchDupl(arr, size)){
            cout << "Duplicates found" << endl;
        }
        else{
            cout << "Duplicates not found" << endl;
        }
        cout << endl;
    }
    
    return 0;
}
*/


//응용 2번 문제
/*
int* make_arr(int n){
    int* list = new int[n];
    for(int i = 0; i < n; i++){
        list[i] = (2 * i + 1);
    }
    return list;
}

void print_arr(int* a, int n){
    cout << "\nOdd Number Array:" << endl;
    while(n){
        cout << *a << " ";
        a++;
        n--;
    }
    cout << endl;
}

int sum_arr(int* a, int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int* arr = make_arr(n);
    print_arr(arr, n);
    
    int sum = sum_arr(arr, n);
    cout << "\nSum of array: " << sum << endl;
    
    delete[] arr;
    return 0;
}
*/


//응용 1번 문제
/*
vector<vector<int>> initMat(int nRow, int nCol){
    
    vector<vector<int>> result(nRow, vector<int>(nCol));
    for(int row = 0; row < nRow; row++){
        for(int col = 0; col < nCol; col++){
            result[row][col] = rand() % 19 - 9;
        }
    }
    return result;
}

void printMat(vector<vector<int>> mat){
    for(int row = 0; row < mat.size(); row++){
        for(int col = 0; col < mat[row].size(); col++)
            cout << setw(4) << mat[row][col];
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> multMat(vector<vector<int>> aMat, vector<vector<int>> bMat){
    vector<vector<int>> result;
    for(int row = 0; row < aMat.size(); row++){
        for(int col = 0; col < aMat[row].size(); col++){
            //이 부분 모르겠음.. 포기
        }
    }
    
}

int main()
{
    
    int aRow, aCol;
    int bRow, bCol;
    cout << "A의 행, 열의 크기를 입력해주세요 : ";
    cin >> aRow >> aCol;
    cout << "B의 행, 열의 크기를 입력해주세요 : ";
    cin >> bRow >> bCol;
    cout << endl;
    
    if(aRow == 0 || aCol == 0 || bRow == 0 || bCol == 0){
        cout << "행렬을 생성할 수 없습니다." << endl;
        exit(404);
    }
    
    vector<vector<int>> aMat = initMat(aRow, aCol);
    vector<vector<int>> bMat = initMat(bRow, bCol);
    
    cout << "A 행렬 : " << endl;
    printMat(aMat);
    cout << "B 행렬 : " << endl;
    printMat(bMat);
    
    if(aCol != bRow){
        cout << "두 행렬을 곱할 수 없습니다." << endl;
        exit(404);
    }
    cout << "AB 곱행렬 : ";
    vector<vector<int>> abMat = multMat(aMat, bMat);
    printMat(abMat);
    
    return 0;
}
*/


//6번 문제
/*
bool found_char(const char* s, char ch) {
    while (*s != '\0') {
        if (*s == ch) {
            return true;
        }
        s++;
    }
    return false;
}


int main()
{
    //                      012345(6)
    const char* phrase = "phrase";

    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " is ";
        if (!found_char(phrase, ch))
            cout << "NOT";
        cout << " in (" << phrase << ")" << endl;
    }

    return 0;
}
*/



//5번 문제
/*
void print(int** m, int nRow, int nCol) {
    for (int row = 0; row < nRow; row++) {
        for (int col = 0; col < nCol; col++) {
            cout << m[row][col] << '\t';
        }
        cout << endl;
    }
}

int main()
{
    int nRow = 2, nCol = 2;
    int** matrix2;
    matrix2 = new int* [nRow];
    for (int i = 0; i < nRow; i++) {
        matrix2[i] = new int[nCol];
    }

    matrix2[0][0] = 1;    matrix2[0][1] = 2;
    matrix2[1][0] = 3;    matrix2[1][1] = 4;
    
    print(matrix2, nRow, nCol);

    for (int i = 0; i < nRow; i++) {
        delete[] matrix2[i];
    }

    delete matrix2;
    return 0;
}
*/



//4번 문제
/*
int main()
{
    const int size = 3;
    int list[size] = { 10, 20, 30 };

    int length = 3;
    cin >> length;
    int* list2 = new int[length];
    
    int* begin = list2;
    int* end = list2 + length;

    for (int* curr = begin; curr != end; curr++)
        cin >> *curr;

    for (int* curr = begin; curr != end; curr++)
        cout << *curr << '\t';
    cout << endl;

    delete[] list2;
    return 0;
}
*/


//3번 문제
/*
bool is_prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    return true;
    }
}

vector<int> primes(int low, int high) {
    vector<int> result;
    for (int i = low; i <= high; i++) {
        if (is_prime(i)) {
            result.push_back(i);
        }
    }
    return result;
}

void print(const vector<int>& v) {
    for (int elem : v) {
        cout << setw(4) << elem;
    }
    cout << endl;
}

int main()
{
    int low, high;
    cin >> low >> high;
    vector<int> vec = primes(low, high);
    print(vec);

    return 0;
}
*/



//2번 문제
/*
void print(const Matrix& mat) {
    //for (unsigned row = 0; row < mat.size(); row++) {
    //    for (unsigned col = 0; col < mat[row].size(); col++) {
    //        cout << setw(4) << mat[row][col];
    //    }
    //    cout << endl;
    //}

    //for (const vector<int>& row : mat) {
    //    for (int elem : row) {
    //        cout << setw(4) << elem;
    //    }
    //    cout << endl;
    //}

    for (auto& row : mat) {
        for (auto& elem : row) {
            cout << setw(4) << elem;
        }
        cout << endl;
    }
}


int main()
{
    Matrix mat{ {1, 2, 3},
                {4, 5, 6} };

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    print(mat);

    return 0;
}
*/



//1번 문제
/*
using Matrix = vector<vector<int>>;

void print(int* begin, int* end) {
    for (int* curr = begin; curr != end; curr++) {
        cout << setw(4) << *curr;
    }

    //int* curr = begin;
    //while (curr != end){
    //    cout << setw(4) << *curr;
    //    curr++;
    //}
    cout << endl;
}
    

int main()
{
    int list[3] = { 10, 20, 30 };
    cout << list << '\t' << *list << endl;
    cout << list + 1 << '\t' << *(list + 1) << endl;
    cout << list + 2 << '\t' << *(list + 2) << endl;

    int* begin = list;
    int* end = list + 3;
    print(begin, end);

    return 0;
}
*/
