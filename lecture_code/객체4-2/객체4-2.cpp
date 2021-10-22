#include <iostream> //cin, cout
#include <fstream> // ofstream, ifstream, fstream
#include <iomanip>

using namespace std;

bool readStu(ifstream& fin, int& id, int& score1, int& score2, int& score3);

void calcGrade(int score1, int score2, int score3, int& avg, char& grade);

void writeStu(ofstream& fout, int id, int avg, char grade);

int main()
{
    // pseudo - code
    // 반복: 모든 학생정보를 읽을 때 까지
    // 1) 학생정보 ch7STUFL.DAT로부터 1줄씩 읽는다.(ID, score1, score2, score3)
    // 2) score1, score2, score3를 이용해서 평균값(avg), grade를 산출한다
    // 3) 파일에 ID, avg, grade를 저장
    
    ifstream fin;
    fin.open("/Users/LeeInsuk/Desktop/CPP/CPP/ch7STUFL.DAT");
    ofstream fout;
    fout.open("/Users/LeeInsuk/Desktop/CPP/CPP/grade.txt");
    
    //예외처리
    if(!fin || !fout){
        cout << "Error: file open failed" << endl;
        exit(100);
    }
    
    
    int id, score1, score2, score3, avg;
    char grade;
    
    while(readStu(fin, id, score1, score2, score3)){
        calcGrade(score1, score2, score3, avg, grade);
        writeStu(fout, id, avg, grade);
    }
    
    cout << "End grading" << endl;
    
    fin.close();
    fout.close();
    return 0;
}

bool readStu(ifstream& fin, int& id, int& score1, int& score2, int& score3){
    // fin >> : 하나의 word 문자열을 읽기(공백, 줄바꿈 문자)
    fin >> id >> score1 >> score2 >> score3;
    if(!fin)
        return false;
    else
        return true;
}

void calcGrade(int score1, int score2, int score3, int& avg, char& grade){
    avg = (score1 + score2 + score3) / 3;
    if( 90 <= avg)
        grade = 'A';
    else if(80 <= avg)
        grade = 'B';
    else if(70 <= avg)
        grade = 'C';
    else if(60 <= avg)
        grade = 'D';
    else
        grade = 'F';
}

void writeStu(ofstream& fout, int id, int avg, char grade){
    fout.fill('0');
    fout << setw(4) << id;
    fout.fill(' ');
    fout << setw(3) << avg;
    fout << setw(2) << grade << endl;
}


/*
int main()
{
    double a = 12.345;
    
    cout << a << endl;
    
    cout.width(15); //setw(15)
    cout.precision(4);
    cout.fill('-');
    cout << a << endl;
    cout << 22.33334 << endl;
    
    char ch;
//    cin.unsetf(ios::skipws);// ws: white space
//    cin >> ch;
//    cout << '(' << ch << ')' << endl;
    
    cin.setf(ios::skipws);
    cin >> ch;
    cout << '(' << ch << ')' << endl;
    
    return 0;
}
*/


/*
int main()
{
    char ch;
    ofstream fout;
    fout.open("/Users/LeeInsuk/Desktop/CPP/CPP/char.txt");
    while(true){
        cout << "Enter the char: ";
        cin >> ch;
        if(ch == 'q')
            break;
        fout.put(ch);
    }
    
    fout.close();
    
    ifstream fin;
    fin.open("/Users/LeeInsuk/Desktop/CPP/CPP/chara.txt");
    
    if(!fin){
        cout << "File not found" << endl;
        exit(100);
    }
    while(true){
        fin.get(ch);
        if(!fin)//파일의 끝까지 다 읽으면 fin == false (fin.eof())
            break;
        cout << ch << endl;
    }
    
    fin.close();
    
    return 0;
}
*/
