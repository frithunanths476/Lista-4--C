#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int turno;
	
	do {
		cout << "Informe o d�gito do turno sorteado: ";
	    cin >> turno;
	    
	    switch(turno){
	    	case 0: cout << "Saindo do programa";
	    	
	    	case 1: cout << "Manh�\n";
	    	break;
	    	case 2: cout << "Tarde\n";
	    	break;
	    	case 3: cout << "Noite\n";
	    	break;
	    	
	
	    	default: cout << "Informe um d�gito v�lido\n"; //isso � para que se a pessoa digitar um numero que nao esta mencionado no CASE, apare�a uma mensagem avisando
	}
		
	}while(turno != 0); //se for diferente de 0, vai executando normalmente. Se for 0, vai parar
	
}
