#include <iostream>
using namespace std; 

int main() {
    int count;
    cout<<"desde que número quieres contar \n";
    cin>>count;
    for (int i = count; i < 1; i--){
        if(i%2==0){
            cout<<"\n"<<i;
        }
    }
    
}