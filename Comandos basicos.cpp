#include <iostream>

using namespace std;

float produto, multiplicador, multiplicando;

int main(){
	cout <<"Digite o número a ser multiplicado: \n";
	cin >> multiplicando;
	cout <<"Digite o número multiplicador: \n";
	cin >> multiplicador;
	produto = multiplicador*multiplicando;
	cout <<"O produto entre os números é: "<<produto<< "\n";
	
	return 0;
}