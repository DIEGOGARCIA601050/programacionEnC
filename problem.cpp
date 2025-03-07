#include <iostream>
using namespace std;

double precio(int precioLaptops, int precioSSDs, int precioPastasTermicas){
    double total=(precioLaptops*5)+(precioSSDs*4)+(precioPastasTermicas*3);
    return total;
}

void descuento(double total) {
    double total2=total*0.2;
    total=total-total2;
    cout<<"Tienes un descuento de: $"<<total2<<"\n";
    cout<<"El total es de $"<<total<<"\n";
}

int main() {
    int  precioLaptops, PrecioSSDs, precioPastasTermicas, condition;
    do {
        cout<<"Ingresa el precio de las laptops";
        cin>>precioLaptops;
        cout<<"Ingresa el precio de las SSDs";
        cin>>PrecioSSDs;
        cout<<"Ingresa el precio de las pastas termicas";
        cin>>precioPastasTermicas;
        double total=precio(precioLaptops, PrecioSSDs, precioPastasTermicas);
        descuento(total);
        cout<<"¿Deseas continar? 1 para continuar, 0 para terminar\n";
        cin>>condition;
    } while (condition);
    
    return 0;
}
