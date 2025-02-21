#include <iostream>
using namespace std;
int main(){
    //definimos las variables que vamos a usar
    int num1=5, num2=8, num3=9, num4=3, num5=2, sum=num1+num2, resta=num3-num4, multiplicacion=num1*num2*num3*num4*num5;
    int nums[]={num1, num2, num3, num4, num5}, tamano=sizeof(nums)/sizeof(nums[0]);
    float division;

    //Multiplicar todos los numeros
    int mult=1;
    for (int i = 0; i < tamano; i++)
    {
        mult=mult*nums[i];
    }
    printf("El resultado de la multiplicación es: %d\n", mult);

    //dividir todos los numeros
    double Division=1;
    for (int i = 0; i < tamano; i++)
    {
        Division=nums[i]/Division;   
    }
    cout<<"El resultado de la división es: "<<Division;

    //restar todos los numeros
    int Resta=0;
    for (int i = 0; i < tamano; i++)
    {
        Resta=nums[i]-Resta;   
    }
    cout<<"\nEl resultado de la resta es: "<<Resta;


    int suma=0;
    for (int i = 0; i < tamano; i++)
    {
        suma=nums[i]+suma;   
    }
    cout<<"\nEl resultado de la suma es: "<<suma;

    return 0;
}