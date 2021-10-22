//문제 2번
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class VectorList{
    vector<double*> vItem;
    vector<int> vLength;
public:
    ~VectorList(){
        for(auto elem : vItem)
            delete[] elem;
    }
    
    void append(double* _pArray, int _length) {
        this->vItem.push_back(_pArray);
        this->vLength.push_back(_length);
    }
    
//    int findVector (double* _pArray, int _length){ // 해결 안됌
//        for(int i = 0; vItem.size(); i++){
//            if(vLength.at(i) == _length){
//                for(int j = 0; j < _length; j++){
//                    if(*(vItem.at(i) + j) != *(_pArray + j)){
//                        break;
//                    }
//                }
//            return i;
//            }
//        }
//    }
    
    int findVector (double* _pArray, int _length){
        for(int i = 0; i < vItem.size(); i++){
            if(vLength.at(i) == _length && *vItem.at(i) == *_pArray){
                return i;
            }
        }
        return -1;
    }
    
    void print_single_vector(int idx){
        if(0 <= idx && idx <= vItem.size()){
            cout << idx << "-th vector: ";
            for(int i = 0; i < vLength.at(idx); i++)
                cout << setw(10) << *(vItem.at(idx) + i);
            cout << endl;
        }
        else{
            cout << "[Wrong index]" << endl;
        }
    }
    
    void print_all_vectors() {
        for(int i = 0; i < vItem.size(); i++){
            cout << i << "-th vector: ";
            for(int j = 0; j < vLength.at(i); j++)
                cout << setw(10) << *(vItem.at(i) + j);
            cout << endl;
        }
        cout << endl;
    }
};

            

int main()
{
    VectorList vectorList;
    double *pTemp = new double[3] {1.1, 2.2, 3.3};
    vectorList.append(pTemp, 3);
    
    pTemp = new double[5]{ 10.1, 10.2, 10.3, 10.4, 10.5 };
    vectorList.append(pTemp, 5);
    
    pTemp = new double[2]{ 4.5, 5.5 };
    vectorList.append(pTemp, 2);
    
    vectorList.print_single_vector(-1);
    vectorList.print_single_vector(0);
    cout << endl;
    
    vectorList.print_all_vectors(); // 3) 모든 vector들을 화면에 출력 cout << endl;
    double* pTemp1 = new double[2]{ 4.5, 5.5 };
    double* pTemp2 = new double[4]{ 1.1, 2.2, 5.5, 4.4 };
    cout << "Index of vector{4.5, 5.5} :" << vectorList.findVector(pTemp1, 2) << endl;
    cout << "Index of vector{1.1, 2.2, 5.5, 4.4} :" << vectorList.findVector(pTemp2, 4) << endl;
    
//    delete[] pTemp;
//    delete[] pTemp1;
//    delete[] pTemp2;
    
    return 0;
}



//문제 1번
/*
#include <iostream>

using namespace std;


class Complex{
    double re, im;
    
public:
    Complex(double r, double i){re = r; im = i;}
    Complex() {re = 0; im = 0;}
    
    Complex operator+(const Complex& num){
        this->re += num.re;
        this->im += num.im;
        return (*this);
    }
    
    Complex operator+(double num){
        this->re += num;
        return (*this);
    }
    
    Complex operator-(const Complex& num){
        this->re -= num.re;
        this->im -= num.im;
        return (*this);
    }
    
    Complex operator-(double num){
        this->re -= num;
        return (*this);
    }
    
    Complex operator=(const Complex& result){
        this->re = result.re;
        this->im = result.im;
        return (*this);
    }

    void print(){
        cout << re << " + i" << im << endl;
    }
    
};


int main()
{
    Complex a(0.3, 8.4), b(4.5, 5.2), c(2.0, 7.7);
    Complex sum, dif;
    sum = a + b + 3.0;
    cout << "a + b + 3.0 = ";
    sum.print();
    
    dif = a - b - 2.0;
    cout << "a - b - 2.0 = ";
    dif.print();
    
    sum = a + b + 5 - c - 8;
    cout << "a + b + 5 - c - 8 = ";
    sum.print();
    
    return 0;
}
*/
