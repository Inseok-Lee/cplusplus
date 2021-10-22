
//응용 문제 3번
/*
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Student{
private:
    string name;
    int id;
    string dpt;
    vector<string> subjectV;
    vector<char> gradeV;
    
public:
    Student() : name("default"), id(0), dpt("depart") {}
    Student(string _name, int _id, string _dpt) : name(_name), id(_id), dpt(_dpt) {}
    
    void setName(string _name){
        name = _name;
    }
    void setID(int _id){
        id = _id;
    }
    void setDpt(string _dpt){
        dpt = _dpt;
    }
    
    void print(){
        cout << name << ' ' << id << ' ' << dpt << endl;
    }
    
    void addGrade(string _subject, char _grade){
        subjectV.push_back(_subject);
        gradeV.push_back(_grade);
    }
    
    void printGrades(){
        for(int i = 0; i < subjectV.size(); i++){
            cout << subjectV.at(i) << " " << gradeV.at(i) << endl;
        }
        cout << "GPA : " << getGPA(subjectV, gradeV) << endl;
    }
    
    float getGPA(vector<string> subjectV, vector<char> gradeV){
        float sum = 0;
        float result;
        for(int i = 0; i < gradeV.size(); i++){
            if(gradeV[i] == 'A')
                sum += 4;
            else if(gradeV[i] == 'B')
                sum += 3;
            else if(gradeV[i] == 'C')
                sum += 2;
            else if(gradeV[i] == 'D')
                sum += 1;
            else
                sum += 0;
        }
        result = sum / gradeV.size();
        
        return result;
    }
    
    void getYear(int _year){
        int year = floor(id / 1000000);
        int count = _year - year;
        if(count == 0){
            cout << "Freshmen(1학년)" << endl;
        }
        else if(count == 1){
            cout << "Sophomore(2학년)" << endl;
        }
        else if(count == 2){
            cout << "Junior(3학년)" << endl;
        }
        else if(count == 3){
            cout << "Senior(4학년)" << endl;
        }
        else{
            cout << "About to graduate(5학년 이상)" << endl;
        }
    }
    
    
};


int main()
{
    Student Harry("Harry", 2017310973, "CS");
    Harry.print();
    Harry.getYear(2019);
    Harry.addGrade("programming", 'A');
    Harry.addGrade("Basic Circuit", 'B');
    Harry.printGrades();
    cout << "\n\n";
    
    Student Ron;
    Ron.print();
    cout << "\n";
    Ron.setName("Ron");
    Ron.setID(2014103959);
    Ron.setDpt("EE");
    Ron.print();
    Ron.getYear(2019);
    Ron.addGrade("Computer Architecture", 'B');
    Ron.addGrade("Machine Learning", 'B');
    Ron.addGrade("Computer Vision", 'C');
    Ron.printGrades();
    cout << "\n\n";

    return 0;
}
*/




//응용 문제 2번
/*
#include <iostream>
#include <string>
using namespace std;

class CStudent
{
private:
    int number;
    string name;
    string major;

public:
    CStudent()
        : number(2018000000), name("»´±Êµø"), major("ƒƒ«ª≈Õ∞¯«–∞˙") {}

    CStudent(int _number, string _name, string _major) {
        number = _number;
        name = _name;
        major = _major;
    }

    void setNumber(int _number) {
        number = _number;
    }

    void setName(string _name) {
        name = _name;
    }

    void setMajor(string _major) {
        major = _major;
    }

    int getNumber() { return number; }
    string getName() { return name; }
    string getMajor() { return major; }

    void Display() {
        cout << "«–π¯ :" << number << endl;
        cout << "¿Ã∏ß :" << name << endl;
        cout << "¿¸∞¯ :" << major << endl;
        cout << endl;
    }
};

bool overlap(int num1, int num2) {

}


int main()
{
    CStudent s[3];
    int inputNumber;
    string inputName, inputMajor;
    int length = 0;

    while (1) {

        cout << length + 1 << " π¯¬∞ «–ª˝ ¿‘∑¬" << endl;
        cout << "«–π¯ : ";
        cin >> inputNumber;
        cout << "¿Ã∏ß : ";
        cin >> inputName;
        cout << "¿¸∞¯ : ";
        cin >> inputMajor;

        s[length].setNumber(inputNumber);
        s[length].setName(inputName);
        s[length].setMajor(inputMajor);

        if (length == 0) {
            cout << "@¿‘∑¬ øœ∑·" << endl;
            length += 1;
        }

        for (int i = 0; i < length; i++) {
            if (s[i].getNumber() == s[length].getNumber()) {
                cout << "@¡ﬂ∫πµ» «–π¯¿Ã ¡∏¿Á«’¥œ¥Ÿ." << endl;
                break;
            }
        }

        cout << endl;

        if (length == 3) {
            cout << "----∏µÁ¿‘∑¬¿Ã øœ∑·µ«æ˙Ω¿¥œ¥Ÿ----" << endl;
            for (int j = 0; j < length; j++) {
                cout << j << "«–ª˝¡§∫∏" << endl;
                s[j].Display();
            }
        }
    }
    return 0;
}
*/



// 응용 문제 1번
/*
#include <iostream>
#include <string>
using namespace std;

class CStudent
{
private:
    int number;
    string name;
    string major;

public:
    CStudent() : number(2018000000), name("»´±Êµø"), major("ƒƒ«ª≈Õ∞¯«–∞˙") {}

    CStudent(int _number, string _name, string _major) {
        number = _number;
        name = _name;
        major = _major;
    }

    void setNumber(int _number) {
        number = _number;
    }
    void setName(string _name) {
        name = _name;
    }
    void setMajor(string _major) {
        major = _major;
    }

    int getNumber() { return number; }
    string getName() { return name; }
    string getMajor() { return major; }

    void Display() {
        cout << "«–π¯ :" << number << endl;
        cout << "¿Ã∏ß :" << name << endl;
        cout << "¿¸∞¯ :" << major << endl;
        cout << endl;
    }
};

int main()
{
    CStudent s1;
    s1.Display();

    CStudent s2(1999000000, "∞¯¡ˆ√∂", "ø¨±ÿøµ»≠∞˙");
    s2.Display();

    s1.setNumber(2006000000);
    s1.setName("πŒ∞Ê»∆");
    s1.setMajor("∆˜Ω∫∆Æ∏¥¯");
    cout << "«–π¯ :" << s1.getNumber() << endl;
    cout << "¿Ã∏ß :" << s1.getName() << endl;
    cout << "¿¸∞¯ :" << s1.getMajor() << endl;

    return 0;
}
*/



// 문재 2번
/*
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string name;
    string id;
    double balance;

public:
    Account() {
        name = "";
        id = "";
        balance = 0;
    }

    Account(string _name, string _id) {
        name = _name;
        id = _id;
        balance = 0;
    }

    Account(string _name, string _id, double _balance) {
        name = _name;
        id = _id;
        balance = _balance;

        if (balance < 0){
            balance = 0;
        }
    }

    void deposit(double _amt) { balance += _amt; }

    bool withdraw(double _amt){
            if (balance - _amt < 0) {
                return  false;
            }
            balance -= _amt;
            return true;
    }

    void print() {
        cout << name << ", " << id << ", " << balance << endl;
    }
};

int main()
{
    Account ac1("πËº∫»£", "1002", 5000);
    Account ac2;
    ac2.print();
    ac1.print();

    int depo;
    cout << "øπ±›«“ ±›æ◊¿ª ¿‘∑¬«œººø‰ : ";
    cin >> depo;
    ac1.deposit(depo);
    ac1.print();

    int wdrw;
    cout << "√‚±›«“ ±›æ◊¿ª ¿‘∑¬«œººø‰ : ";
    cin >> wdrw;
    if (!ac1.withdraw(wdrw)) {
        cout << "¿‹æ◊¿Ã ∫Œ¡∑«’¥œ¥Ÿ." << endl;
    }

    ac1.print();

    return 0;
}
*/



// 문제 1번
/*
#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }

    void setXY(int _x, int _y) {
        x = _x;
        y = _y;
    }

    int getX() { return x; }

    int getY() { return y; }

    void print() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    Point pt1(1, 2), pt2(3, 4);
    pt1.setXY(10, 20);
    pt1.print();
    pt2.print();

    cout << pt1.getX() << endl;
    cout << pt2.getY() << endl;

    return 0;
}
 /*

