#include <iostream>

using namespace std;

int VerificarParouImpar(int num, int par, int impar){
  
   

    for(int num=0; num<=10; num=num+1){
    
    cout<<" informe o numero: ";
    cin>>num;
    if(num % 2==0){
        par=0;
        par=par+1;
        cout<<" a quantidade de numeros pares eh: "<<par<<endl;
    }else{
        impar=0;
        impar=impar+1;
        cout<<"a quantidade de numeros impares eh: "<<impar<<endl;

    }
    }
    

    return num;

}
int main(){
    int num;
    int par;
    int impar;
    VerificarParouImpar (num,par,impar);


    return 0;
}