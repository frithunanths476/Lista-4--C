#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int semana;
	
	do {
		cout << "Informe o d�gito da semana: ";
	    cin >> semana;
	    
	    switch(semana){
	    	case 0: cout << "Saindo do programa";
	    	break;
	    	case 1: cout << "� final de semana\n";
	    	break;
	    	case 2: cout << "� um dia �til\n";
	    	break;
	    	case 3: cout << "� um dia �til\n";
	    	break;
	    	case 4: cout << "� um dia �til\n";
	    	break;
	    	case 5: cout << "� um dia �til\n";
	    	break;
	    	case 6: cout << "� um dia �til\n";
	    	break;
	    	case 7: cout << "� final de semana\n";
	    	break;
	    
	    	default: cout << "Informe um dia da semana v�lido\n"; //isso � para que se a pessoa digitar um numero que nao esta mencionado no CASE, apare�a uma mensagem avisando
	}
		
	}while(semana != 0); //se for diferente de 0, vai executando normalmente. Se for 0, vai parar
	
}
