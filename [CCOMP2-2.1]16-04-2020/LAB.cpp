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
    if (numero2 ==0 && numero1 == 0) {
        cout << "No se puede dividir 0 entre 0\n";
    }
    else if (numero2 == 0) {
        n1 = numero1;
        n2 = numero2;
        
        cout << "No se pude dividir el primer numero entre 0" << "\n";
        cout << "la division del segundo numero entre el primero es:" << n2 / n1 << "\n";
        cout << "No se pude dividir el primero entre 0 para sacar el residuo" << "\n";
        cout << "el residuo de dividir el segundo numero entre el primero es:" << numero2 % numero1 << "\n";
    }
    else if(numero1==0){
        n1 = numero1;
        n2 = numero2;
       
        cout << "No se pude dividir el segundo numero entre 0" << "\n";
        cout << "La division del primer numero entre el segundo es :" << n1 / n2 << "\n";
        cout<<"el residuo de dividir el primer numero entre el segundo es:" << numero1 % numero2 << "\n";
        cout << "No se pude dividir segundo entre 0 para sacar el residuo" << "\n";  
    }
    else {
        n1 = numero1;
        n2 = numero2;
        cout << "La division del primer numero entre el segundo es :" << n1 / n2 << "\n";
        cout << "la division del segundo numero entre el primero es:" << n2 / n1 << "\n";
        cout << "el residuo de dividir el primer numero entre el segundo es:" << numero1 % numero2 << "\n";
        cout << "el residuo de dividir el segundo numero entre el primero es:" << numero2 % numero1 << "\n";
    }
    if (numero1 < numero2) {
        cout << "el numero mayor es " << numero2<<"\n";
        cout << "el numero menor es " << numero1 << "\n";
    }
    else if (numero2 > numero1) {
        cout << "el numero mayor es: " << numero1 << "\n";
        cout << "el numero menor es: " << numero2 << "\n";
    }
    else {
        cout << "los numeros son iguales\n";

    }
    if (numero1 == 0 || numero2 == 0) {
        cout << "No se pude realizar la operacion uno de los numeros es igual a 0\n";
        cout << "No se pude realizar la operacion uno de los numeros es igual a 0\n\n";
    }
    else if (numero1 == numero2) {
        cout << "los numeros son iguales asi que son divisibles entre si\n\n ";
    }
    else if (numero1 % numero2 == 0) {
        cout << "El segundo numero es divisor del primero \n\n";
    }
    else if (numero2 % numero1 == 0) {
        cout << "El primer numero es divisor del segundo\n\n";
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
            cout << "no se puede dividir el primer operador entre 0\n";
            cout << "el segundo operador entre el primer operador es:" << operador2 / operador1;
        }
        else if (operador1 == 0) {
            cout << "no se puede dividir el segundo operador entre 0\n";
            cout << "el primer operador entre el segundo operador es:" << operador1 / operador2 ;
        }
        else {
            n1 = operador1;
            n2 = operador2;
            cout << "la division del primer operador entre el segundo operador es:" << n1 / n2 << "\n";
            cout <<"la division del segundo operador entre el primer operador es:"<< n2 / n1;
        }
    }
    else if (tipo == resd) {
        cout << "ingrese el primer operador:"; cin >> operador1;
        cout << "ingrese el segundo operador:"; cin >> operador2;
        if (operador2 == 0) {
            cout << "no se pude sacar el residuo del primer operador entre el segundo operador\n ";
            cout << "el residuo del segundo operador entre el primer operador:" << operador2 % operador1;
        }
        else if (operador1 == 0) {
            cout << "no se puede sacar el residuo del segundo operador entre el primer operador\n";
            cout << "el residuo del primer operador entre el segundo operador:"<<operador1%operador2 ;
        }
        else {
            cout << "el residuo del segundo operador entre el primer operador:" << operador2 % operador1 << "\n";
            cout << "el residuo del primer operador entre el segundo operador:" << operador1 % operador2;
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

