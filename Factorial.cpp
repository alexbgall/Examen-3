#include <iostream>
using namespace std;

int factorial(int num);
void consultarsaldo(float);
float retirar(float);

int main()
{
    int num, opc, opc2;
    float saldo = 20000;
    do {
        cout << "BIENVENIDO" << endl;
        cout << "1: FACTORIAL" << endl;
        cout << "2: CAJERO AUTOMATICO" << endl;
        cout << "0: SALIR" << endl;
        cin >> opc;
        switch (opc) {
            case 1: {	
                cout << "Ingrese el numero que desea el factorial: " << endl;
                cin >> num;
                cout << "El factorial de " << num << " es: " << factorial(num) << endl;
                break;
            }
            case 2: {
                cout << "BIENVENIDO AL CAJERO AUTOMATICO" << endl;
                cout << "OPCIONES: " << endl;
                cout << "1: CONSULTAR SALDO" << endl;
                cout << "2: RETIRAR EFECTIVO" << endl;
                cout << "0: SALIR" << endl;
                cin >> opc2;
                
                if (opc2 == 1) {
                    consultarsaldo(saldo);
                }
                else if (opc2 == 2) {
                    saldo = retirar(saldo);
                    cout << "Su nuevo saldo es: $" << saldo << endl;
                }
                else if (opc2 == 0) {
                    break;
                }
                break;
            }
        }
    } while (opc != 0);
    return 0;
}

int factorial(int num) 
{
    if (num <= 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

void consultarsaldo(float saldo)
{
    cout << "SU SALDO ES DE: $" << saldo << endl;
}

float retirar(float saldo)
{
    float cantidad = 0;
    cout << "QUE CANTIDAD DESEA RETIRAR?" << endl;
    cin >> cantidad;
    if (cantidad > saldo) {
        cout << "Saldo insuficiente." << endl;
    } else {
        saldo -= cantidad;
        cout << "CANTIDAD RETIRADA CON EXITO" << endl;
    }
    return saldo;
}