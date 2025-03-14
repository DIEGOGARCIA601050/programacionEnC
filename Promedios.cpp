#include <iostream>
using namespace std; 


//funcion sin retorno
void mensaje(int cal1, int b, int c) {
    int promedio=(cal1+b+c)/3;
    cout<<promedio<<endl;
}

int main() {
    int cal1, b, c;
    cout<<"ingresa la primera calificación\n";
    cin>>cal1;
    cout<<"ingresa la segunda calificación\n";
    cin>>b;
    cout<<"ingresa la tercera calificación\n";
    cin>>c;
    mensaje(cal1,b,c);
    return 0;
}