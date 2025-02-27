#include <iostream>
using namespace std;

int main() {
    cout<<"Ingresa tu edad \n";
    int edad;
    cin>>edad;
    cout<<"edad: "<<edad<<"\n";
    if (edad>=18 && edad<30){
        cout<<"estas chavo \n";
    } else if(edad<18) {
        cout<<"Estás bien morrito \n";
    }
    if(edad>=45 && edad<55){
        cout<<"Te truena la rodilla \n";
    }
    if(edad>=30 && edad<45){
        cout<<"Estás chavoruco \n";
    }
    if(edad>=55){
        cout<<"Tramita tu tarjeta del bienestar \n";
    }

    return 0;
}