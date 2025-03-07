#include <iostream>
using namespace std; 


//funcion sin retorno
void mensaje(int a, int b, int c) {
    int promedio=(a+b+c)/3;
    cout<<promedio<<endl;
}

int main() {
    int a, b, c;
    cout<<"ingresa la primera calificación\n";
    cin>>a;
    cout<<"ingresa la segunda calificación\n";
    cin>>b;
    cout<<"ingresa la tercera calificación\n";
    cin>>c;
    mensaje(a,b,c);
    return 0;
}