#include <iostream>
using namespace std;

void PerimetroRectangulo();
void PerimetroTriangulo();
void PerimetroCirculo();
void PerimetroHexagono();
void AreaRectangulo();
double area();
void AreaTriangulo();
void AreaCirculo();
void mostrar(double area);
void AreaHexagono();
int menu();
int menu2();

int menu() {
    int opc;
    cout<<"Ingresa la figura para la cual quieres calcular su área 1 para rectangulo, 2 para triangulo, 3 para circulo y 4 para hexagono\n";
    cin>>opc;
    return opc;
}

int menu2() {
    int opc;
    cout<<"Ingresa la figura para la cual quieres calcular su perimetro 1 para rectangulo, 2 para triangulo, 3 para circulo y 4 para hexagono\n";
    cin>>opc;
    return opc;
}

void mostrar(double area){
    cout<<"el area es de: "<<area<<"m² \n";
}

void PerimetroHexagono(){
    double lado;
    cout<<"ingresa la medida del lado \n";
    cin>>lado;
    double Perimetro=lado*6;
    mostrar(Perimetro);
}

void AreaHexagono(){
    double lado;
    cout<<"ingresa la medida del lado \n";
    cin>>lado;
    double area= 2.598076211*lado*lado;
    mostrar(area);
}


void PerimetroCirculo(){
    double radio;
    cout<<"Ingresa el radio del circulo \n";
    cin>>radio;
    double Perimetro=2*3.1416*radio;
}

void AreaCirculo(){
    double radio;
    cout<<"Ingresa el radio del circulo \n";
    cin>>radio;
    double area=3.1416*radio*radio;
    mostrar(area);
}

void PerimetroTriangulo(){
    double lado1, lado2, lado3;
    cout<<"Ingresa las longitudes de los 3 lados";
    cin>>lado1;
    cin>>lado2;
    cin>>lado3;
    double Perimetro=lado1+lado2+lado3;
    mostrar(Perimetro);
}

void AreaTriangulo(){
    double Area=area()/2;
    mostrar(Area);
}

void PerimetroRectangulo(){
    double Altura, Base;
    cout<<"Ingresa la base \n";
    cin>>Base;
    cout<<"Ingresa la altura \n";
    cin>>Altura;
    double Perimetro=2*Base+2*Altura;
    mostrar(Perimetro);
}

void AreaRectangulo(){
    double Area=area();
    mostrar(Area);
}


double area(){
    double Altura, Base;
    cout<<"Ingresa la base \n";
    cin>>Base;
    cout<<"Ingresa la altura \n";
    cin>>Altura;
    return Base*Altura;
}

int main(){
    int condition;
    do {
        int opcion;
        cout<<"Ingresa 1 para calcular el área o 2 para el perimetro";
        cin>>opcion;
        if (opcion==1){
            int opc=menu();
            while(opc>4||opc<1){
                cout<<"Error, Ingresa la figura para la cual quieres calcular su área 1 para rectangulo, 2 para triangulo, 3 para circulo y 4 para pentagono \n";
                cin>>opc;
            }
            switch (opc){
                case 1:
                    AreaRectangulo();
                    break;
                case 2:
                    AreaTriangulo();
                    break;
                case 3:
                    AreaCirculo();
                    break;
                case 4:
                    AreaHexagono();
                    break;
                default:
                    cout<<"Error, Ingresa la figura para la cual quieres calcular su área 1 para rectangulo, 2 para triangulo, 3 para circulo, y 4 para hexagono \n";
                    break;
            }
        }
        if (opcion==2){
            int opc=menu2();
            while(opc>4||opc<1){
                cout<<"Error, Ingresa la figura para la cual quieres calcular su área 1 para rectangulo, 2 para triangulo, 3 para circulo y 4 para pentagono \n";
                cin>>opc;
            }
            switch (opc){
            case 1:
                PerimetroRectangulo();
                break;
            case 2:
                PerimetroTriangulo();
                break;
            case 3:
                PerimetroCirculo();
                break;
            case 4:
                PerimetroHexagono();
                break;
            default:
                break;
            }
        }
        
        cout<<"¿Deseas continuar? 1 para continuar, 0 para terminar \n";
        cin>>condition;
    } while (condition==1);
    

    return 0;
}