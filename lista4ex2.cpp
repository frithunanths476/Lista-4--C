#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    char letra; //serve para armazenar 1 caractere.

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "A letra digitada é uma vogal" << endl;
    } else {
        cout << "A letra digitada é uma consoante" << endl;
    }

    return 0;
}
