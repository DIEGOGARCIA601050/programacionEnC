#include <iostream>
using namespace std; 

int main() {
    string name="";
    cin>>name;
    while (name=="")
    {
        cin>>name;
    }
    cout<<"Hola "<<name<<'\n';
}