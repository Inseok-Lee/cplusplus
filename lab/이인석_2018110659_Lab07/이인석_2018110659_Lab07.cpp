#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//응용 5번 문제
/*
int main() {
    
    ofstream fout("/Users/LeeInsuk/Desktop/CPP/CPP/example.txt");
    fout << "In this paper, we explore the feasibility of a" << endl;
    fout << "medical training system for breast tumor palpation based on haptic" << endl;
    fout << "augmented reality (AR) technology. Haptic AR is an emerging" << endl;
    fout << "research area in haptics and virtual reality" << endl;
    fout << "(VR), which is concerned" << endl;
    fout << "with augmenting the haptic" << endl;
    fout << "properties of a real object by means of virtual haptic" << endl;
    fout << "feedback. The AR-based tumor palpation system" << endl;
    fout << "consists of a real breast sample.";
    fout.close();
    
    int length;
    cout << "length = ";
    cin >> length;
    
    ifstream fin("/Users/LeeInsuk/Desktop/CPP/CPP/example.txt");
    
    if(!fin)
        cout << "Error: no such file exists" << endl;
        exit(100);
    
    ofstream fout2("/Users/LeeInsuk/Desktop/CPP/CPP/example2.txt");
    char ch;
    while (true)
        fin.get(ch);
        fout2 << setw(length) << ch;
        if (!fin)
            break;
    
    }
    return 0;
}
*/




//응용 4번 문제
/*
int main() {
    ofstream fout1("Input1.txt");
    fout1 << "On its 60th anniversary in 2009, Kyung" << endl;
    fout1 << "Hee University prepared for a second leap" << endl;
    fout1 << "forward while seeking a new paradigm of future" << endl;
    fout1 << "university development." << endl;
    fout1.close();

    ofstream fout2("Input2.txt");
    fout2 << "In this paper, we explore the feasibility of a" << endl;
    fout2 << "medical training system for breast tumor palpation" << endl;
    fout2 << "based on haptic augmented reality (AR) technology." << endl;
    fout2.close();

    ofstream fout3("output.txt");
        ifstream fin1("input1.txt");
        string s1;
        while (getline(fin1, s1))
            fout3 << s1 << endl;
        
        fout3 << endl;
        
        ifstream fin2("input2.txt");
        string s2;
        while (getline(fin2, s2))
            fout3 << s2 << endl;
        
        fin1.close();
        fin2.close();
    fout3.close();

    return 0;
}
*/



//응용 3번 문제
/*
void calcMatrix(ofstream& fout);

int main() {
    ofstream fout;
    fout.open("/Users/LeeInsuk/Desktop/CPP/CPP/temp.txt");
    
    calcMatrix(fout);
    
    fout.close();
    return 0;
}

void calcMatrix(ofstream& fout) {
    for(int row = 1; row <= 10; row++){
        for(int col = 1; col <= 10; col++)
            fout << rand() % 100 + 1 << setw(3);
        fout << endl;
    }
}
*/



//응용 2번 문제
/*
int main() {
    string data = "사랑, 프로그래밍, 의자, 사랑의바보, 영통역, 천년의사랑, 냉장고, 객체지향";
    char ch;

    cout << "키워드 : ";
    cin >> ch;
    int x = 0;
    int num = data.find(ch, x);
    for (int x = 0; num == string::npos; x += 2) {
        cout << data.substr(num, 2) << '\t';
    }
    
    return 0;
}
*/



//응용 1번 문제
/*
int main() {
    string address;
    string city, area, street, building;

    cout << "시 : ";
    cin >> city;

    cout << "구 : ";
    cin >> area;

    cout << "로 : ";
    cin >> street;

    cout << "건물명 : ";
    cin >> building;

    address = city + area + street + building;

    cout << "집 주소 : " << address << endl;

    return 0;
}
*/



//4번 문제
/*
bool getStu(ifstream& fin, int& id, int& exam1, int& exam2, int& exam3) {
    fin >> id >> exam1 >> exam2 >> exam3;
    if(!fin)
        return false;
    return true;
}

void calcAvgGrade(int& exam1, int& exam2, int& exam3, int& avg, char& grade) {
    avg = (exam1 + exam2 + exam3);
    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else
        grade = 'F';
}

void writeStu(ofstream fout, int id, int avg, char grade) {
    fout.fill('0');
    fout << setw(4) << id;
    fout.fill(' ');
    fout << setw(3) << avg;
    fout.fill(' ');
    fout << setw(2) << grade << endl;
}
    

int main () {
    ifstream fin;
    fin.open("ch7STUFL.DAT");
    
    
    ofstream fout;
    fout.open("grade.txt");
    
    int id, exam1, exam2, exam3, avg;
    char grade;
    
    if(!fin || !fout) {
        cout << "File open error" << endl;
        exit(100);
    }
    
    while (getStu(fin, id, exam1, exam2, exam3)) {
        calcAvgGrade(exam1, exam2, exam3, avg, grade);
        writeStu(fout, id, avg, grade);
    }
    
    fin.close();
    fout.close();
    
    cout << "end";
    
    return 0;
}
*/



//3번 문제
/*
#include <iostream>
using namespace std;

int main() {
    double d1 = 1.23456789;
    
    cout << d1 << endl;
    
    cout.width(10);
    cout.precision(3);
    cout << d1 << endl;
    
    char ch1;
    char ch2;
    
    cin >> ch1;
    cout << "(" << ch1 << ")" << endl;
    
    cin.ignore();
    
    cin.unsetf(ios::skipws);
    cin >> ch2;
    cout << "(" << ch2 << ")" << endl;

    return 0;
}
*/




//2번 문제
/*
int main() {
    ofstream fout;
    fout.open("/Users/insuklee/Desktop/Object-\ oriented/Lab07_2018110659_이인석/Lab07_2018110659_이인석/example.txt");
    
    string s2 = "Objective Oriented Programming";
    fout << s2 << endl;
    fout << "Random Variables" << endl;
    fout << "Linear Algebra" << endl;
    
    fout.close();
    
    ifstream fin;
    string s1;
    fin.open("/Users/insuklee/Desktop/Object-\ oriented/Lab07_2018110659_이인석/Lab07_2018110659_이인석/example.txt");
    if(!fin) {
        cout << "Error, no such file exists" << endl;
        exit(100);
    }
    
    while (getline(fin, s1)) {
        cout << s1 << endl;
    }
    
    
//    while (true) {
//        fin >> s1;
//        if (!fin)
//            break;
//        cout << s1 << endl;
//    }
    
    
    fin.close();
    return 0;
}
*/




//1번 문제
/*
int main() {
    string s1 = "mouse";
    cout << s1 << endl;
    cout << s1.length() << ", " << s1.size() << endl << endl;
    
    cout << s1.empty() << endl;
    s1.clear();
    cout << s1.empty() << endl;
    
    s1 = "Good";
    s1 += "-bye";
    cout << s1 << endl;
    cout << s1[4] << ", " << s1.at(4) << endl;
    cout << (s1 == "Good-bye") << endl;
    cout << (s1 == "good-bye") << endl;
    cout << (s1 >= "z") << endl;
    
    cout << s1.substr(5, 3) << endl;
    cout << s1.substr(2, 2) << endl;
    cout << s1.find("od") << endl;
    cout << s1.find("od", 5) << endl;
    int od_index = s1.find("od");
    cout << s1.find("od", od_index + 2);
    cout << (s1.find("korea") == string::npos) << endl;

    return 0;
}
*/

