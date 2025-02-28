#include <iostream>
using namespace std; 

int main() {
    int num;
    double factorial=1;
    cout<<"De que número quieres el factorial \n";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    
    cout<<"El factorial de "<<num<<" es: "<<factorial;
}