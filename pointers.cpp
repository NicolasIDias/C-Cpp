#include <iostream>

using namespace std;

void pointers() {
	int num = 20;
	int* ptrNum = &num; // int* e uma variavel ponteiro tipo int que armazena o valor da memoria onde a variavel num esta armazenado

	string food = "pizza";
	string* ptrFood = &food; // int* e uma variavel ponteiro tipo string que armazena o valor da memoria onde a variavel num esta armazenado

	// referencia: retorna o endereco da memoria que armazena o valor da variavel food
	cout << ptrFood << endl;

	// Desreferência: retorna o valor que esta armazenado no ponteiro
	cout << *ptrFood << endl;

	cout << ptrNum << endl;
	cout << num << endl;


	// alterando o valor de uma variavel pelo ponteiro

	string anotherfood = "hamburger";
	string* aptrFood = &anotherfood;

	cout << aptrFood << endl;
	cout << *aptrFood << endl;

	*aptrFood = "Sushi";
	cout << aptrFood << endl;
	cout << anotherfood;
}

void testPointers() {
	int num1;
	int* ptr;
	int address;

	cin >> num1;

	int* ptrNum1 = &num1;

	cout << ptrNum1 << endl;
	cout << *ptrNum1 << endl;

	

}




int main() {
	
	testPointers();

	return 0;
}
