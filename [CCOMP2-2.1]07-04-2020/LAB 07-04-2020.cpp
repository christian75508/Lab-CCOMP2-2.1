#include<iostream>
#include<cmath>



using namespace std;
int main()
{
    cout << "1 EJERCICIO" << "\n";
    cout << "Ingrese los siguientes datos:" << "\n";
    string nombre, direccion, hobby;
    int edad, telefono;

    cout << "Nombre:"; cin >> nombre;
    cout << "Edad:"; cin >> edad;
    cout << "Telefono:"; cin >> telefono;
    cout << "Direccion:"; cin >> direccion;
    cout << "Hobby:"; cin >> hobby;
    cout << "Su nombre es:" << nombre << "\n" << "Su edad es:" << edad << "\n" << "Su telefono es:" << telefono << "\n" << "Su direccion es:" << direccion << "\n" << "Su hobby es:" << hobby << "\n" << endl;


    cout << "2 EJERCICIO" << "\n";
    cout << "Ingrese dos numeros" << "\n";
    float numero1, numero2;
    cout << "Ingrese el primer numero:"; cin >> numero1;
    cout << "Ingrese el segundo numero:"; cin >> numero2;
    cout << "Suma:" << numero1 + numero2 << "\n" << "Resta:" << numero1 - numero2 << "\n" << "Multiplicacion:" << numero1 * numero2 << "\n" << "Division:" << numero1 / numero2 << "\n" << "Raiz Cuadrada del primer numero:" << sqrt(numero1)<<" y  "<<"Raiz Cuadrada del segundo numero "<< sqrt(numero2) <<"\n" <<endl;


    cout << "3 EJERCICIO" << "\n";
    
    int radio, lado, base, altura, area;
    float  s,lado1,lado2,lado3;
    
    cout << "Ingresar el radio del circulo:";cin >> radio;
    
    cout << "El area del circulo es :" << 3.1415 * radio * radio << "\n";
    cout << "Ingresa el lado del cuadrado:"; cin >> lado;
    cout << "El area del cuadrado es:" << lado * lado << "\n";
    cout << "Ingresar el numero segun el tipo de triangulo que tienes: 1)Equilatero   2)Isosceles   3)Escaleno   4)Rectangulo"<<"\n";
    int tipo;
    cin >> tipo;
    if (tipo == 1) {
        cout << "Ingresar el primer lado:"; cin >> lado1;
        cout << "Ingresar el segundo lado:"; cin >> lado2;
        cout << "Ingresar el tercer lado:"; cin >> lado3;
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El area es: " << sqrt(3) / 4 * lado1 * lado1;
        }
    }
    else if (tipo == 2) {
            cout << "Ingresar el primer lado:"; cin >> lado1;
            cout << "Ingresar el segundo lado:"; cin >> lado2;
            cout << "Ingresar el tercer lado:"; cin >> lado3;
            if (lado1 == lado2) {
                cout << "El area del triangulo es:" << lado3 * sqrt((lado1 * lado1) - (lado3 * lado3 / 4))/2;
            }
            else if (lado1 = lado3) {
                cout<<"El area del triangulo es:"<<lado2 * sqrt((lado1 * lado1) - (lado2 * lado2 / 4))/2;
            }
            else {
                cout << "El area del triangulo es:" << lado1 * sqrt((lado2 * lado2) - (lado1 * lado1 / 4))/2;
            }
    }
    else if (tipo == 3) {
        cout << "Ingresar el primer lado:"; cin >> lado1;
        cout << "Ingresar el segundo lado:"; cin >> lado2;
        cout << "Ingresar el tercer lado:"; cin >> lado3;
        if (lado1 != lado2  && lado1 != lado3 && lado2 != lado3) {
            s = (lado1 + lado2 + lado3)/ 2;
            cout << "El area del triangulo es:" << sqrt(s * (s - lado1) * (s - lado2) * (s - lado3)) << s;
        }
    }
    
    else 
    {
        cout << "Ingresar la base del triangulo:"; cin >> base;
        cout << "Ingresar la altura del triangulo:"; cin >> altura;
        cout << "El area del triangulo es:" << base * altura / 2;
    }

   return 0;

}
