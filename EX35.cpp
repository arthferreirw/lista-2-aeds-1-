#include <iostream>

using namespace std;

void GeradorDeNumeroPrimo(int seq){
    cout<<" informe a sequencia de numeros primos a ser impresso na tela: ";
    cin>>seq;
    cout<<" 2 , ";
    for(int i=3; i<=seq; i=i+2){
        
      cout<<i<<" , ";
    

    }
    








}
int main(){
    int seq=0;

    GeradorDeNumeroPrimo(seq);







    return 0;
}