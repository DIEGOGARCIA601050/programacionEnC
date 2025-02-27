#include <iostream>
using namespace std;

int main() {
    cout<<"Ciclo for";
    int count;
    cout<<"\n Hasta que número quieres contar \n";
    cin>>count;
    cout<<"contar hasta el "<<count;
    for (int i = 1; i <=count; i++)
    {
        cout<<"\n"<<i;
    }
    
    return 0;
}