#include <iostream>
#include <cmath>   // Para usar pow()
using namespace std;

int main() {
    double P, r;   // Capital y tasa de interés
    int n, t;      // Periodos por año y años

    cout << "Ingrese el capital inicial (P): ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual (ejemplo 0.05): ";
    cin >> r;

    cout << "Ingrese el numero de veces que se aplica el interes por año (n): ";
    cin >> n;

    cout << "Ingrese el numero de años (t): ";
    cin >> t;

    // Fórmula del interés compuesto
    double A = P * pow(1 + r / n, n * t);

    cout << "El monto final es: " << A << endl;

    return 0;
}
