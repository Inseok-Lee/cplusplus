#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// using Matrix = vector<vector<int>>;


int sum(int* list, int size) { // int list[] 도 가능
    int result = 0;
    for(int i = 0; i < size; i++)
        result += list[i];
    return result;
}

void print(int* begin, int* end){
    for(int* curr = begin; curr != end; curr++){
        cout << *curr << '\t';
    }
    cout << endl;
    
//    int* curr = begin;
//    while(curr != end){
//        cout << *curr << '\t';
//        curr++;
//    }
//    cout << endl;
}



// pointer + 1: 배열의 다음 element값으로 update
// list 그 자체는 배열의 시작 주소값을 저장
int main(){
    // int* list[] = {0x00, 0x04, 0x08}
    int list[] = {10, 20, 30};
//    cout << sum(list, 3) << endl;
    
    cout << (list + 0) << '\t' << *(list + 0) << endl; // list[0]
    cout << (list + 1) << '\t' << *(list + 1) << endl; // list[1]
    cout << (list + 2) << '\t' << *(list + 2) << endl; // list[2]
    
    int* begin = list;
    int* end = list + 3;
    print(begin, end);

    return 0;
}



/*
void print(const vector<vector<int>>& m){ // m.size() -> m의 행의 개수
//    for(unsigned row = 0; row < m.size(); row++){
//        for(unsigned col = 0; col < m[row].size(); col++){
//            cout << setw(4) << m[row][col];
//        }
//        cout << endl;
//    }
    
    for(const vector<int>& row : m){
        for(int elem : row) // row(vector<int>)s
            cout << setw(4) << elem;
        cout << endl;
    }
    
    // auto: 선언시 data type을 대체할 수 있음
    for(const auto& row : m){ // m에 어떤 데이터 타입이 있는지 이미 알고 이씀
        for(auto elem : row)
            cout << setw(4) << elem;
        cout << endl;
    }
    
    // auto a = 1;
    // auto b; -> 오류, b가 어떤 데이터 타입인지 모름
}

int main(){
    // 2 x 3 matrix
//    vector<vector<int>> mat(2, vector<int>(3));
    vector<vector<int>> mat{{1, 2, 3}, // mat[0]
                            {4, 5, 6}};// mat[1]
    mat[0][0] = 1; mat[0][1] = 2; mat[0][2] = 3;
    mat[1][0] = 2; mat[1][1] = 3; mat[1][2] = 4;
    print(mat);
 
    return 0;
}
*/



/*
 //소수? 1과 자기자신을 제외하고는 약수가 없는, 1보다 큰 정수
bool is_prime(int n){
    if(n < 2)
        return false;
    for(int i = 2; i < n; i++)
        if( n % i == 0)
            return false;
    return true;
}

vector<int> primes(int low, int high){
    vector<int> result;
    for(int i = low; i <= high; i++)
        if(is_prime(i))
            result.push_back(i);
    return result;
}

void print(const vector<int> v){
    for(int elem : v)
        cout << setw(6) << elem;
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
