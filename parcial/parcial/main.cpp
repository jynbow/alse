#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

int contarPuntosEnCuadrante(Point puntos[], int n, int cuadrante) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        double x = puntos[i].x;
        double y = puntos[i].y;
        if (x == 0 || y == 0) continue;
        if (cuadrante == 1 && x > 0 && y > 0) count++;
        else if (cuadrante == 2 && x < 0 && y > 0) count++;
        else if (cuadrante == 3 && x < 0 && y < 0) count++;
        else if (cuadrante == 4 && x > 0 && y < 0) count++;
    }
    return count;
}

int main() {
    int n, cuadrante;

    cout << "Ingrese el numero de puntos: ";
    cin >> n;

    Point puntos[n];

    for (int i = 0; i < n; i++) {
        cout << "Punto " << i+1 << " - x: ";
        cin >> puntos[i].x;
        cout << "Punto " << i+1 << " - y: ";
        cin >> puntos[i].y;
    }

    cout << "Ingrese el cuadrante (1-4): ";
    cin >> cuadrante;

    int resultado = contarPuntosEnCuadrante(puntos, n, cuadrante);

    cout << "Puntos en el cuadrante " << cuadrante << ": " << resultado << endl;

    return 0;
}