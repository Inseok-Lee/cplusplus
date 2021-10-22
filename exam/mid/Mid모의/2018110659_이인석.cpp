#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void get_command(string& command);// 10점

void get_size(int& size);// 10점

int** gen_matrix(int& size);// 20점

void swap(int* a, int* b);// 10점

void sort_array(int* ary, int size);// 10점

void sort_matrix_row(int** matrix, int size);// 10점

void print_matrix(int** matrix, int size);// 10점

void save_matrix(int** matrix, int size);//10점

void free_matrix(int** matrix, int size);// 10점


int main() {
	string command;
	int** matrix = NULL;
	int size = 0;
	while (1) {
		get_command(command);
		if (command == "1") {
			get_size(size);
			matrix = gen_matrix(size);
		}
		else if (command == "2") {
			print_matrix(matrix, size);
		}
		else if (command == "3") {
			sort_matrix_row(matrix, size);
		}
		else if (command == "4") {
			save_matrix(matrix, size);
		}
		else if (command == "0") {
			free_matrix(matrix, size);
			cout << "Exit the program.." << endl;
			exit(104);
		}
		else {
			cout << "Wrong command" << endl << endl;
		}
	}
	return 0;
}

void get_command(string& command) {
	cout << "1. Genertate matrix" << endl;
	cout << "2. Print matrix" << endl;
	cout << "3. Sort matrix" << endl;
	cout << "4. Save matrix" << endl;
	cout << "0. Exit program" << endl;
	cin >> command;
}

void get_size(int& size) {
	cout << "Enter the size in (size x size): " << endl;
	cin >> size;
}

int** gen_matrix(int& size) {
	int** list = new int* [size];// delete 해줄것!
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			list[row][col] = rand() % 100 + 0;
		}
	}
	return list;
}

void swap(int* a, int* b) {
	int* temp = b;
	b = a;
	a = temp;
}

void sort_array(int* ary, int size) {
	
		for (int j = 0; j < size; j++) {
			if (ary[j] > ary[j + 1]) {
				swap(ary[j], ary[j + 1]);
			}
		}
	}
}


void sort_matrix_row(int* matrix,int size) {
	fac(n) {
		result = n * (n - 1);
	}

	for(int row = 0; row < size; row++){
		matrix[row] = sort_array(ary, size);


}

void print_matrix(int** matrix, int size) {
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			cout << setw(4) << matrix[row][col];
		}
	}
}


void save_matrix(int** matrix, int size) {
	ofstream myfile;
	myfile.open("matrix.txt");
	myfile << size << endl;
	myfile << matrix;
	cout << "Saved";
}

void free_matrix(int** matrix, int size) {
	for (int i = 0; i < size; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}


