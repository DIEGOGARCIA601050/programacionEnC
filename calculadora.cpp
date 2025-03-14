#include <iostream>
using namespace std;
int menu() {
    int opc;
    cout<<"Ingresa la operación que quieres hacer 1 para suma, 2 para resta, 3 para multiplicación y 4 para división \n";
    cin>>opc;
    return opc;
}
double suma(double num1, double num2) {
    return num1+num2;
}
double resta(double num1, double num2) {
    return num1-num2;
}
double multiplicacion(double num1, double num2) {
    return num1*num2;
}
double division(double num1, double num2) {
    return num1/num2;
}

int main() {
    //operación
    int opc=menu();
    double num1, num2;
    while(opc>4||opc<1){
        cout<<"Error, Ingresa la operación que quieres hacer 1 para suma, 2 para resta, 3 para multiplicación y 4 para división \n";
        cin>>opc;
    }
    cout<<"Ingresa el primer número \n";
    cin>>num1;
    cout<<"Ingresa el segundo número \n";
    cin>>num2;
    cout<<num1<<" "<<opc<<" "<<num2<<"\n";
    switch (opc) {
        case 1:
            cout<<suma(num1,num2)<<"\n";
            break;
        case 2:
            cout<<resta(num1,num2)<<"\n";
            break;
        case 3:
            cout<<multiplicacion(num1,num2)<<"\n";
            break;
        case 4:
            cout<<division(num1,num2)<<"\n";
            break;
        default:
            cout<<"Error, Ingresa la operación que quieres hacer 1 para suma, 2 para resta, 3 para multiplicación y 4 para división \n";
            break;
    }
    return 0;
}