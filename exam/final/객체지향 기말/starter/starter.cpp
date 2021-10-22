#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int MAX_COURSE = 10;

class Student {
private:
	string id;      //학생의 ID
	string name;    // 학생 이름
	int numCourses; //수강 과목 갯수
	string* courses;//수강 과목 ID 리스트
public:
	Student(string _id = "----", string _name = "----") /*구현할 것(20)*/
	~Student() /*20점 구현할 것*/
	void setId(string _id) { id = _id; }
	void setName(string _name) { name = _name; }
	string getId() const { return id; }
	string getName() const { return name; }
	int getNumCourses() const { return numCourses; }
	string getCourse(int index) const { return courses[index]; }
	void print() const {
		cout << setw(10) << id
			<< setw(10) << name
			<< setw(10) << numCourses;
		for (int i = 0; i < numCourses; i++)
			cout << setw(10) << courses[i];
		cout << endl;
	}

	bool addCourse(string _course)  /*구현할 것(20)*/
	bool deleteCourse()				/*구현할 것(20)*/	
	bool find_course(string _course)  /*구현할 것(20)*/
};

class Course {
private:
	string id;
	string name;
public:
	Course(string _id = "----", string _name = "----")
		:id(_id), name(_name) {
	}
	void setId(string _id) { id = _id; }
	void setName(string _name) { name = _name; }
	string getId() const { return id; }
	string getName() const { return name; }
	void print() const {
		cout << setw(10) << id
			<< setw(30) << name << endl;
	}
};

// 1번
int main() {
	Student std1("202011", "박서준"), std2;
	std1.addCourse("CSE-102");
	std1.addCourse("CSE-104");
	std1.print();
	std2.print();
	cout << endl;

	Course crs1("CSE-102", "객체지향프로그래밍"), crs2;
	crs1.print();
	crs2.print();
	cout << endl;

	std1.deleteCourse();
	std1.addCourse("CSE-331");
	std1.print();
	cout << endl;

	cout << "CSE-102 과목 찾기: " << std1.find_course("CSE-102") << endl;
	cout << "CSE-104 과목 찾기: " << std1.find_course("CSE-104") << endl;

	return 0;
}

/*
// 2번
int main() {
	Student stdList[4];
	Course crsList[4];
	ifstream fin;

	//read students.txt
	fin.open("students.txt");
	int i = 0;
	while (stdList[i].readInfo(fin)) {
		cout << stdList[i] << endl;
		i++;
	}
	cout << endl;
	fin.close();

	//read courses.txt
	fin.open("courses.txt");
	i = 0;
	while (crsList[i].readInfo(fin)) {
		cout << crsList[i] << endl;
		i++;
	}
	cout << "개설된 강의 수: " << crsList[0].getNumCreatedObj() << endl;
	cout << endl;
	fin.close();


	//== operator overloading
	cout << "학생 간 비교: " << (stdList[0] == stdList[1]) << endl;
	cout << "과목 간 비교: " << (crsList[0] == crsList[0]) << endl;
	cout << endl;

	// write
	stdList[3].setId("201844");
	stdList[3].setName("홍길동");
	stdList[3].addCourse("CSE-202");
	crsList[3].setId("CSE-202");
	crsList[3].setName("자료구조");

	ofstream fout;
	fout.open("students_new.txt");
	for (int i = 0; i < 4; i++)
		stdList[i].writeInfo(fout);
	fout.close();

	fout.open("courses_new.txt");
	for (int i = 0; i < 4; i++)
		crsList[i].writeInfo(fout);
	fout.close();

	return 0;
}
*/


/*
// 3번
int main() {
	string fileNameStd, fileNameCrs;
	cout << "학생 파일명을 입력하시오: ";
	cin >> fileNameStd;
	cout << "과목 파일명을 입력하시오: ";
	cin >> fileNameCrs;

	try {
		ApplicationType application(fileNameStd, fileNameCrs);
		application.run();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	return 0;
}
*/