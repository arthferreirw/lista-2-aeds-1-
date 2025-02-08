#include <iostream>

using namespace std;

int VerificadorNumeroPrimo(int num, int contador, int resultado){
    cout<<" informe um numero para ver a sequencia de numeros primos: ";
    cin>>num;
    
    for(int i=1; i<=num; i=i+1){
        resultado=num%i;
        if(resultado==0){
        contador=contador+1;

        }
        if(contador==2){
            cout<<" o numero eh primo "<<endl;
            cout<<contador;
            return true;

        }else{
            cout<<" o numero nao  eh primo "<<endl;
            return false;
        }


    }





}
int main(){
    int num=0;
    int contador=0;
    int resultado=0;
    VerificadorNumeroPrimo(num,contador,resultado);





    return 0;
}