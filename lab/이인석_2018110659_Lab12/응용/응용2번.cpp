#include <iostream>
#include <string>

using namespace std;

class CStudent{
private:
    int number;
    string name;
    string major;
public:
    CStudent () : number(2018000000), name("홍길동"), major("컴퓨터공학과") {}
    CStudent (int _number, string _name, string _major) {
        number = _number;
        name = _name;
        major = _major;
    }
    
    int getNumber() {return number;}
    string getName() {return name;}
    string getMajor() {return major;}
    
    void setNumber(int _number) {number = _number;}
    void setName(string _name) {name = _name;}
    void setMajor(string _major){major = _major;}
    
    void Display(){
        cout << "학번 :" << number << endl;
        cout << "이름 :" << name << endl;
        cout << "전공 :" << major << endl;
        cout << endl;
    }
    
    friend bool find_key(CStudent stu[], int length, int inputNumber);
    
};

bool find_key(CStudent stu[], int length, int inputNumber){
    for(int i = 0; i < length; i++){
        if(stu[i].number == inputNumber)
            return true;
    }
    return false;
}


int main(){
    CStudent s[3];
    int inputNumber;
    string inputName, inputMajor;
    int length = 0;
    
    while(1){
        cout << length + 1 << " 번째 학생 입력" << endl;
        cout << "학번 : ";
        cin >> inputNumber;
        cout << "이름 : ";
        cin >> inputName;
        cout << "전공 : ";
        cin >> inputMajor;
        
        if(!find_key(s, length, inputNumber)){
            s[length].setNumber(inputNumber);
            s[length].setName(inputName);
            s[length].setMajor(inputMajor);
            cout << "입력완료" << endl << endl;
            length++;
        }
        else{
            cout << "중복된 학번이 존재합니다" << endl <<endl;
        }
        
        if(length == 3){
            cout << "----모든입력이 완료되었습니다----" << endl;
            for(int i = 0; i < length; i++){
                cout << i + 1 << "학생정보" << endl;
                cout << "학번 :" << s[i].getNumber() << endl;
                cout << "이름 :" << s[i].getName() << endl;
                cout << "전공 :" << s[i].getMajor() << endl;
                cout << endl;
            }
            break;
        }
    }
    return 0;
}
