#include <iostream>
bool teste=0;
using namespace std;

int main (){
	// cout << "Teste de numeros positivos\n";
	cout <<"Digite o valor a ser testado:\n";
	cin >> teste;
	if (teste==1){
		cout <<"O numero digitado pertence aos positivos!\n";
	}else{
		cout <<"O numero digitado pertence aos negativos!\n";
	}
	return 0;
}