#include <iostream>
using namespace std;

int main() {
    //operación
    int opc;
    double num1, num2;
    cout<<"Ingresa la operación que quieres hacer 1 para suma, 2 para resta, 3 para multiplicación y 4 para división \n";
    cin>>opc;
    cout<<"Ingresa el primer número \n";
    cin>>num1;
    cout<<"Ingresa el segundo número \n";
    cin>>num2;
    cout<<num1<<" "<<opc<<" "<<num2<<"\n";
    switch (opc) {
        case 1:
            cout<<num1+num2<<"\n";
            break;
        case 2:
            cout<<num1-num2<<"\n";
            break;
        case 3:
            cout<<num1*num2<<"\n";
            break;
        case 4:
            cout<<num1/num2<<"\n";
            break;
        default:
            cout<<"Error, Ingresa la operación que quieres hacer 1 para suma, 2 para resta, 3 para multiplicación y 4 para división \n";
            break;
    }
    return 0;
}