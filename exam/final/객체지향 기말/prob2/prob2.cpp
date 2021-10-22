#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int MAX_COURSE = 10;

class Student {
private:
	string id;      //�л��� ID
	string name;    // �л� �̸�
	int numCourses; //���� ���� ����
	string* courses;//���� ���� ID ����Ʈ
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

	bool addCourse(string _course) {
		if (courses->size() < MAX_COURSE) {
			courses->append(_course);
			return true;
		}
		else {
			cout << "����: �������� �߰��� �� �����ϴ�." << endl;
			return false;
		}
	}
	bool deleteCourse() {
		if (courses->size() != 0) {
			(*courses).pop_back();
			return true;
		}
		else {
			cout << "����: ������ �������� �����ϴ�." << endl;
			return false;
		}
	}
	bool find_course(string _course) {
		for (int i = 0; i < courses->size(); i++) {
			if (_course == courses[i]) {
				return true;
			}
		}
		return false;
	}

	bool operator==(const Student& _stu) {
		if (this->id == _stu.id) {
			return true;
		}
		else {
			return false;
		}
	}


	bool readInfo(ifstream& fin) {
		string s;
		getline(fin, s);
		if (!fin) {
			return false;
		}
		else {
			return true;
		}
	}

	void writeInfo(ofstream& fout) {
		fout << setw(10) << id
			<< setw(10) << name
			<< setw(10) << numCourses;
		for (int i = 0; i < numCourses; i++)
			fout << setw(10) << courses[i];
		fout << endl;
	}
};

ofstream& operator<<(ofstream& cout, Student stu) {
	cout << setw(10) << stu.getId() << setw(10) << stu.getName() << stu.getNumCourses();
	for (int i = 0; i < stu.getNumCourses(); i++)
		cout << setw(10) << stu.getCourse(i);
	cout << endl;
	return cout;
}

class Course {
private:
	string id;
	string name;
	static int numCreatedObj;
public:
	Course(string _id = "----", string _name = "----")
		:id(_id), name(_name) {
		numCreatedObj++;
	}
	void setId(string _id) { id = _id; }
	void setName(string _name) { name = _name; }
	string getId() const { return id; }
	string getName() const { return name; }
	void print() const {
		cout << setw(10) << id
			<< setw(30) << name << endl;
	}

	int getNumCreatedObj() { return numCreatedObj; }

	bool operator==(Course _course) {
		if (this->id == _course.id) {
			return true;
		}
		else {
			return false;
		}
	}

	bool readInfo(ifstream& fin) {
		string s;
		getline(fin, s);
		if (!fin) {
			return false;
		}
		else {
			return true;
		}
	}
	void writeInfo(ofstream& fout) {
		cout << setw(10) << id
			<< setw(30) << name << endl;
	}
};

ofstream& operator<<(ofstream& cout, Course cour) {
	cout << setw(10) << cour.getId() << setw(30) << cour.getName() << endl;
	return cout;
}

int Course::numCreatedObj = 0;

// 2��
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
	cout << "������ ���� ��: " << crsList[0].getNumCreatedObj() << endl;
	cout << endl;
	fin.close();


	//== operator overloading
	cout << "�л� �� ��: " << (stdList[0] == stdList[1]) << endl;
	cout << "���� �� ��: " << (crsList[0] == crsList[0]) << endl;
	cout << endl;

	// write
	stdList[3].setId("201844");
	stdList[3].setName("ȫ�浿");
	stdList[3].addCourse("CSE-202");
	crsList[3].setId("CSE-202");
	crsList[3].setName("�ڷᱸ��");

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