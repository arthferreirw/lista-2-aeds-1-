#include <iostream>

using namespace std;

void ConjuntoDeNumeros(int n, int soma){
    int valor=0;
    int maior=0;
    int menor=999;
    cout<<" informe quantos valores: ";
    cin>>n;

    if(n>1000){

        cout<<" insira outro valor: ";
        cin>>n;
        

    }else if(n<0){
        
        cout<<" insira outro valor: ";
        cin>>n;
        
    }

    for(int i=0; i<n; i=i+1){
    cout<<" informe um numero: ";
    cin>>valor;
    if(valor>maior)
       maior=valor;

     if(valor<menor)
        menor=valor;
    cout<<"o menor valor eh: "<<menor<<endl;
    cout<<"o maior valor eh: "<<maior<<endl;
    }
    soma=menor+maior;
    cout<<" a soma do maior numero com o menor numero eh: "<<soma<<endl;
    
}

int main(){

int n=0;
int soma=0;
ConjuntoDeNumeros(n,soma);

    return 0;
}