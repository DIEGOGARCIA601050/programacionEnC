#include <iostream>
using namespace std;

double precio() {
    double precio;
    cout<<"Introduce el precio\n";
    cin>>precio;
    return precio;
}
void descuento() {
    double Precio=precio();
    double NuevoPrecio=Precio*.8;
    double descuento=Precio*.2;
    cout<<"Tienes un descuento de: $"<<descuento<<"\n";
    cout<<"El total es de $"<<NuevoPrecio<<"\n";
}
int main() {
    descuento();
    return 0;
}