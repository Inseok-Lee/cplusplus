#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class VectorList {
	vector<double*> vItem; //Item (array)�� pointer����
	vector<int> vLength; //�� Item(array)�� ���� ����
public:
	~VectorList() { delete[] pTemp; }
	void append(double* _pArray, int _length) {
		for(int i = 0; i < _length ; i++){
			vItem.push_back(_pArray[i]);
	}
	int findVector(double* _pArray, int _length) {
		for (int i = 0; i < _length; i++) {
			if (_pArray[i] = vItem[i]){
				return i;
		return -1;
	
	}
	void print_single_vector(int idx) {
		if (idx < 0 || vItem.size() < idx) {
			cout << "[Wrong index]" << endl;
		}
		else {
			cout << vItem[idx] << endl;
		}

	}
	void print_all_vectors() {
		for (double elem : vItem)
			cout << elem << endl;
	}
};
int main() {
	VectorList vectorList;
	double* pTemp = new double[3]{ 1.1, 2.2, 3.3 };
	vectorList.append(pTemp, 3); // ������ �߰�
	pTemp = new double[5]{ 10.1, 10.2, 10.3, 10.4, 10.5 };
	vectorList.append(pTemp, 5); // ������ �߰�
	pTemp = new double[2]{ 4.5, 5.5 };
	vectorList.append(pTemp, 2); // ������ �߰�
	vectorList.print_single_vector(-1); // 1) -1��° index�� vector�� ȭ�鿡 ���
	vectorList.print_single_vector(0); // 2) 0��° index�� vector�� ȭ�鿡 ���
	cout << endl;
	vectorList.print_all_vectors(); // 3) ��� vector���� ȭ�鿡 ���
	cout << endl;
	double* pTemp1 = new double[2]{ 4.5, 5.5 };
	double* pTemp2 = new double[4]{ 1.1, 2.2, 5.5, 4.4 };
	cout << "Index of vector{4.5, 5.5} :" << vectorList.findVector(pTemp1, 2) << endl;
	cout << "Index of vector{1.1, 2.2, 5.5, 4.4} :" << vectorList.findVector(pTemp2, 4)
		<< endl;
	delete[] pTemp;
	delete[] pTemp1;
	delete[] pTemp2;
	return 0;
]