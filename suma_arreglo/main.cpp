#include <iostream>
using namespace std;

// Función que verifica si un número es palíndromo
bool isPalindrome(int x) {
    // Los números negativos no pueden ser palíndromos
    if (x < 0)
        return false;

    int original = x;
    int invertido = 0;

    // Invertir el número
    while (x > 0) {
        invertido = invertido * 10 + (x % 10);
        x /= 10;
    }

    // Comparar número original con el invertido
    return original == invertido;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (isPalindrome(numero)) {
        cout << "El numero ES palindromo." << endl;
    } else {
        cout << "El numero NO es palindromo." << endl;
    }

    return 0;
}
