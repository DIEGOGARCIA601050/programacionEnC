#include <iostream>
using namespace std;

int main() {
    //Lógicas
    bool PasoElExamen=true, pagoInscripcion=true;
    if(PasoElExamen&&pagoInscripcion){
        cout<<"Puedes estudiar en la UAPT \n";
    }

    //Relaciónales
    int montoDeCompra=3500;
    if(montoDeCompra>=2000){
        montoDeCompra=montoDeCompra*.9;
        cout<<"Tienes un descuento del 10% \n";
        cout<<"el nuevo monto es de $"<<montoDeCompra<<"MXN \n";
    }


    //ejercicios edad
    int edad=29;
    if (edad>=18 && edad<30){
        cout<<"estas chavo \n";
    } else {
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