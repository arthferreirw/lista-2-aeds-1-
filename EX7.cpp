#include <iostream>

using namespace std;

int SomatorioIntervaloNumeros(int num1,int num2){

    int somatorio=0;
    for(int i=num1; i<=num2; i=i+1){
        cout<<i<<endl;
        somatorio=somatorio+i;

    }
    cout<<" a soma eh: "<<somatorio<<endl;






    return somatorio;
}
int main(){

    int num1=0;
    cout<<" informe num1: ";
    cin>>num1;

    int num2=0;
    cout<<" informe num2: ";
    cin>>num2;

    

    SomatorioIntervaloNumeros(num1,num2);






    return 0;
}