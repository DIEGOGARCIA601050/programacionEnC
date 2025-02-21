#include <iostream>

int main() {
    int  precioLaptops=11500, PrecioSSDs=675, precioPastasTermicas=78;
    double total, total2;
    total=(precioLaptops*5)+(PrecioSSDs*4)+(precioPastasTermicas*3);
    total2=total*0.2;
    total=total-total2;
    std::cout<<"El total es: "<<total;
return 0;
}
