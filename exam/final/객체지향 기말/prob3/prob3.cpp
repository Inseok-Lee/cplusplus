#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int MAX_COURSE = 10;

class Base {
protected:
	string id;
	string name;
public:
	Base(string _id, string _name) : id(_id), name(_name) {}
	virtual void setId(string _id) { id = _id; }
	virtual void setName(string _name) { name = _name; }
	virtual string getId() const { return id; }
	virtual string getName() const { return name; }
	virtual void print() const = 0;
	virtual bool readInfo(ifstream& fin) = 0;
	virtual void writeInfo(ofstream& fout) = 0;

	//Student class에만 존재
	virtual int getNumCourses() const = 0;
	virtual string getCourse(int index) = 0;
	virtual bool addCourse(string _course) = 0;
	virtual bool deleteCourse() = 0;
	virtual bool find_coures() = 0;
};

class ApplicationType {
private:
	vector<Base*> list;
	string fileNameStd;
	string fileNameCrs;

public:
	ApplicationType(string _fileNameStd, string _fileNameCrs) : fileNameStd(_fileNameStd), fileNameCrs(_fileNameCrs) {
		ifstream fin1, fin2;
		fin1.open("_fileNameStd");
		fin2.open("_fileNameCrs");
		if (!fin) {
			cout << "f"
		}
	}
	~ApplicationType() {

	}

	bool addStudent() {

	}

	void findStudentslnCourse() {

	}

	void displayStudents() {

	}

	void displayCourses() {

	}


};




class Student : public Base {
private:
	string id;      //학생의 ID
	string name;    // 학생 이름
	int numCourses; //수강 과목 갯수
	string* courses;//수강 과목 ID 리스트
public:
	Student(string _id = "----", string _name = "----") : id(_id), name(_name) {
		numCourses = 0;
		courses = new string[MAX_COURSE];
	}
	~Student() {
		delete courses;
	}
	void setId(string _id) { id = _id; }
	void setName(string _name) { name = _name; }
	string getId() const { return id; }
	string getName() const { return name; }
	int getNumCourses() const override { return numCourses; }
	string getCourse(int index) const override { return courses[index]; }
	void print() const {
		cout << setw(10) << id
			<< setw(10) << name
			<< setw(10) << numCourses;
		for (int i = 0; i < numCourses; i++)
			cout << setw(10) << courses[i];
		cout << endl;
	}

	bool addCourse(string _course) override {
		if (courses->size() < MAX_COURSE) {
			courses->append(_course);
			return true;
		}
		else {
			cout << "오류: 아이템을 추가할 수 없습니다." << endl;
			return false;
		}
	}
	bool deleteCourse() override {
		if (courses->size() != 0) {
			(*courses).pop_back();
			return true;
		}
		else {
			cout << "오류: 삭제할 아이템이 없습니다." << endl;
			return false;
		}
	}
	bool find_course(string _course) override {
		for (int i = 0; i < courses->size(); i++) {
			if (_course == courses[i]) {
				return true;
			}
		}
		return false;
	}
};

class Course : public Base {
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
	int getNumCourses() const override {
	}
	string getCourse(int index) override {}
	bool addCourse(string _course) override {}
	bool deleteCourse() override {}
	bool find_course(string _course) override {}



};

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