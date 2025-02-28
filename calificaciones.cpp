#include <iostream>
using namespace std; 

int main() {
    double calificaciones[]={};

    for (int i = 0; i < 5; i++)
    {
        cout<<"ingresa la "<<i<<"° calificación\n";
        cin>>calificaciones[i];
    }
    double promedio=0;
    for (int i = 0; i < 5; i++)
    {
        promedio=promedio+calificaciones[i];
        cout<<promedio<<endl;
    }
    cout<<"Calificación: "<<promedio<<endl;
    promedio=promedio/5;
    cout<<"Promedio"<<promedio;
    if (promedio<101&&promedio>89)
    {
        cout<<"Excelente";
    }
    if(promedio<90&&promedio>79){
        cout<<"Muy bien";
    }
    if(promedio<80&&promedio>69){
        cout<<"Bien";
    }
    if(promedio<70&&promedio>59){
        cout<<"Regular";
    } else {
        cout<<"Reprobado";
    }
    
}