/* Desenvolva em C++ um programa que carregue todos os dados dos 100 funcion�rios da 
empresa "Lanchol�ndia", calcula a m�dia salarial e escrever o nome dos funcion�rios com 
sal�rio superiores ou iguais a m�dia. Obs: os dados dos funcion�rios ser�o carregados em 
um registro de funcion�rios */

#include <iostream>
using namespace std;

struct funcionario {
	
	char nome[45];
	double salario;
	
};

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	const int TAM_MAX_VETOR = 3;
	int i;
	double totalSalario = 0.0;
	
	struct funcionario funcionarios[TAM_MAX_VETOR];
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
		cout << "\nDigite o nome do funcion�rio: ";
        cin.getline(funcionarios[i].nome, sizeof(funcionarios[i].nome));
        
	
	    cout << "Digite o sal�rio do funcion�rio: ";
	    cin >> funcionarios[i].salario;

	    totalSalario += funcionarios[i].salario;
	    
	    cin.ignore();
		
	}
	
	double mediaSalarial = totalSalario/TAM_MAX_VETOR;
	
	cout << "\nFuncion�rios com sal�rio igual ou superior � m�dia:\n\n";
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
        if (funcionarios[i].salario >= mediaSalarial) {
        	
            cout << funcionarios[i].nome << endl;
            
        }
    }
}
