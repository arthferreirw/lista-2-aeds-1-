#include <iostream>

using namespace std;

void VerificadorNumeroPrimo(int num, int resultado){
    cout<<" informe um numero: ";
    cin>>num;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
        resultado++;
        }
        
        }

        if(resultado==0){
            cout<<" o "<<num<<" eh primo"<<endl;

        }else{
            cout<<" o "<<num<<" nao  eh primo"<<endl;
            
        }
   
    }



int main(){
    int num=0;
    int resultado=0;
    
    VerificadorNumeroPrimo( num,resultado);
    






    return 0;
}