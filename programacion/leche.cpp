#include <iostream> // Biblioteca para entrada y salida

using namespace std; // Usar el espacio de nombres estándar 

//cout es para mostrar en pantalla
//cin es para leer datos desde el teclado
//endl es para hacer un salto de linea

int main(){ // Defino el proceso
    int A,B,R; // Defino mis variables

    cout << "Ingrese un numero: "; // Escribir
    cin >> A; // Leer

    cout << "Ingrese otro numero: "; // Escribir
    cin >> B; // Leer

    R = A + B; // R le asignamos la suma de A + B
    cout << "El valor de R: " << R;
} // FinProceso 