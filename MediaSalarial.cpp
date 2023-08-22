/* Desenvolva em C++ um programa que carregue todos os dados dos 100 funcionários da 
empresa "Lancholândia", calcula a média salarial e escrever o nome dos funcionários com 
salário superiores ou iguais a média. Obs: os dados dos funcionários serão carregados em 
um registro de funcionários */

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
		
		cout << "\nDigite o nome do funcionário: ";
        cin.getline(funcionarios[i].nome, sizeof(funcionarios[i].nome));
        
	
	    cout << "Digite o salário do funcionário: ";
	    cin >> funcionarios[i].salario;

	    totalSalario += funcionarios[i].salario;
	    
	    cin.ignore();
		
	}
	
	double mediaSalarial = totalSalario/TAM_MAX_VETOR;
	
	cout << "\nFuncionários com salário igual ou superior à média:\n\n";
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
        if (funcionarios[i].salario >= mediaSalarial) {
        	
            cout << funcionarios[i].nome << endl;
            
        }
    }
}
