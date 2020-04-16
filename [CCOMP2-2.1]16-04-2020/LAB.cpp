#include <iostream>
using namespace std;

int main()
{
    cout << "PRIMER EJERCICIO\n";
    int numero1, numero2;
    float n1,n2;
    cout << "Ingrese dos numeros\n";
    cout << "Primer numero:"; cin >> numero1;
    cout << "Segundo numero:"; cin >> numero2;
    cout << "La suma de los numeros es:" << numero1 + numero2<<"\n";
    cout << "La resta de los numeros es :" << numero1 - numero2 << "\n";
    cout << "La multiplicacion de los numeros es :" << numero1 * numero2 << "\n";
    if (numero2 == 0) {
        cout << "No se pude dividir entre 0" << "\n";
        cout << "No se pude dividir entre 0" << "\n";
    }
    else {
        n1 = numero1;
        n2 = numero2;
        
        cout << "La division de los numeros es :" << n1 / n2 << "\n";
        cout<<"el residuo de dividir el primer numero entre el segundo es:" << numero1 % numero2 << "\n";
    
    }
    if (numero1 < numero2) {
        cout << "el numero mayor es " << numero2<<"\n";
        cout << "el numero menor es " << numero1 << "\n";
    }
    else {
        cout << "el numero mayor es: " << numero1 << "\n";
        cout << "el numero menor es: " << numero2 << "\n";
    }
    if (numero1 == 0 || numero2 == 0) {
        cout << "No se pude realizar la operacion uno de los numeros es igual a 0\n";
        cout << "No se pude realizar la operacion uno de los numeros es igual a 0\n\n";
    }
    else if (numero1 % numero2 == 0) {
        cout << "El segundo numero es divisor del primero " << "\n\n";
    }
    else if (numero2 % numero1 == 0) {
        cout << "El primer numero es divisor del segundo" << "\n\n";
    }
    

    cout << "SEGUNDO EJERCICIO\n";
    int  operador1, operador2;
    char sum = '+',res='-',mul='*',div='/',resd='%',raiz='~',tipo;
    cout << "Eliga la operacion que realizara:(+)suma  (-)resta (*)multiplicacion  (/)divion  (%)residuo   (~)raiz cuadrada\n"; cin >> tipo;
    if (tipo == sum) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        cout <<"la suma es:"<< operador1 + operador2;
    }
    else if (tipo == res) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        cout <<"la resta es:" << operador1 - operador2;
    }
    else if (tipo == mul) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        cout <<"la multiplicacion es:"<< operador1 * operador2;
    }
    else if (tipo == div) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        if (operador2 == 0) {
            cout << "no se pude dividir entre 0";
        }
        else {
            n1 = operador1;
            n2 = operador2;

            cout <<"la division es:"<< n1 / n2;
        }
    }
    else if (tipo == resd) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        if (operador2 == 0) {
            cout << "no se pude dividir entre 0";
        }
        else {
            cout << "el residuo es:"<<operador1 % operador2;
        }
    }
    else if (tipo == raiz) {
        cout << "ingrese el operador:"; cin >> operador1;
        if (operador1 < 0) {
            cout << "el operador es un numero negativo";
        }
        else {
            cout << "La raiz cuadrada es:" << sqrt(operador1);
        }
        
    }

    return 0;
}

