#include <iostream>
using namespace std; 

int VerificarCalificacion(int calificacion) {
    while (calificacion>100||calificacion<0) {
        cout<<"Valor incorrecto, la calificación debe estar entre 0 y 100, ingresala de nuevo \n";
        cin>>calificacion;
    }
    return calificacion;
    
}

void CalcProm() {
    // C de Calificación
    int Cprogramacion, Credes, CwebApps, Csimulacion, Cpoo;
    cout<<"ingresa la calificación de programación \n";
    cin>>Cprogramacion;
    Cprogramacion=VerificarCalificacion(Cprogramacion);
    cout<<"Ingresa la calificación de Redes\n";
    cin>>Credes;
    Credes=VerificarCalificacion(Credes);
    cout<<"Ingresa la calificación de Aplicaciones web\n";
    cin>>CwebApps;
    CwebApps=VerificarCalificacion(CwebApps);
    cout<<"Ingresa la calificación de Simulación\n";
    cin>>Csimulacion;
    Csimulacion=VerificarCalificacion(Csimulacion);
    cout<<"Ingresa la calificación de POO\n";
    cin>>Cpoo;
    Cpoo=VerificarCalificacion(Cpoo);
    double promedio=(Cprogramacion+Credes+CwebApps+Csimulacion+Cpoo)/5;
    cout<<"Promedio: "<<promedio<<"\n";
    if (promedio<101&&promedio>89)
    {
        cout<<"Excelente";
    }
    if(promedio<90&&promedio>79){
        cout<<"Muy bien\n";
    }
    if(promedio<80&&promedio>69){
        cout<<"Bien\n";
    }
    if(promedio<70&&promedio>59){
        cout<<"Regular\n";
    } 
    if(promedio<60) {
        cout<<"Reprobado\n";
    }
}

int main() {
    int continuar;
    CalcProm();
    cout<<"Pulsa 1 para continuar o 0 para terminar la ejecución\n";
    cin>>continuar;
    while (continuar)
    {
        CalcProm();
        cout<<"Pulsa 1 para continuar o 0 para terminar la ejecución\n";
        cin>>continuar;
    } 

    return 0;
}