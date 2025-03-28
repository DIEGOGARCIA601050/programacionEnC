#include <iostream>
//#include <promedioV2.h>
using namespace std;

float promediofinal(int examen, int proyecto);

int main(){
    int examen, proyecto;
    cout<<"Ingresa calificación del examen \n";
    cin>>examen;
    cout<<"Ingresa calificación de proyecto \n";
    cin>>proyecto;
    float promedioFinal=promediofinal(examen,proyecto);
    cout<<"Calificación final: "<<promedioFinal;
}

float promediofinal(int examen, int proyecto){
    return (examen*0.4)+(proyecto*0.6);
}