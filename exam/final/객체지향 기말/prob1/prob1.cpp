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

// 1��
int main() {
	Student std1("202011", "�ڼ���"), std2;
	std1.addCourse("CSE-102");
	std1.addCourse("CSE-104");
	std1.print();
	std2.print();
	cout << endl;

	Course crs1("CSE-102", "��ü�������α׷���"), crs2;
	crs1.print();
	crs2.print();
	cout << endl;

	std1.deleteCourse();
	std1.addCourse("CSE-331");
	std1.print();
	cout << endl;

	cout << "CSE-102 ���� ã��: " << std1.find_course("CSE-102") << endl;
	cout << "CSE-104 ���� ã��: " << std1.find_course("CSE-104") << endl;

	return 0;
}