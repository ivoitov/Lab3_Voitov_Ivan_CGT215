#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
}
void getAddition(float A, float B) {
	float C = A + B;
	cout << "\n" << A << " + " << B << " = " << C << endl;
}
void getSubtraction(float A, float B) {
	float C = A - B;
	cout << "\n" << A << " - " << B << " = " << C << endl;
}
void getMultiplication(float A, float B) {
	float C = A * B;
	cout << "\n" << A << " * " << B << " = " << C << endl;
}
void getDivision(float A, float B) {
	float C = A / B;
	cout << "\n" << A << " / " << B << " = " << C << endl;
} 
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		getAddition(A, B);
	}
	if (choice == 2) {
		getSubtraction(A, B);
	}
	if (choice == 3) {
		getMultiplication(A, B);
	}
	if (choice == 4) {
		getDivision(A, B);
	}
	return 0;
}
