#include <iostream>

using namespace std;

void VerificadorNumeroPrimo(int num, int resultado, int resto){
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
            for(int i=1; i<=num; i=i+1){
                resto=num%i;
                if(resto==0){
                    cout<<i<< " ";

                }else{


                }
                

        

            }
            
        }
   
    }



int main(){
    int num=0;
    int resultado=0;
    int resto=0;
    
    VerificadorNumeroPrimo( num,resultado,resto);
    






    return 0;
}