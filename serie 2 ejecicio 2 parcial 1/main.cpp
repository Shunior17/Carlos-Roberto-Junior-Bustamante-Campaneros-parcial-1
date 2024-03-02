#include <iostream>
using namespace std;
int main() {
    //Ejercicio for numero impares del 0 al
    int a=0, b=0;
    for (int i=1;i<=50;i++){
        if(i%2==0){
            a=a+i;
            cout<<a<<" + "<<i<<" Suma de los pares"<<endl;
        } else{
            b=b+i;
            cout<<b<<" + "<<i<<" Suma de los impares"<<endl;
        }
    }
    return 0;
}
