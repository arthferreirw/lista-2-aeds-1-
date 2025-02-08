#include <iostream>

using namespace std;


void TabuadaNumeros(int num){

    float produto;
    int i;

    cout<<"tabuada de "<<num<<endl;
    for( i=1; i<=10; i=i+1){
    produto=num*i;
    cout<<num<<" x "<<i<<" = "<<produto<<endl;
    }
    
}
int main(){
    cout<<"- - - GERADOR DE TABUADA - - -"<<endl;
    
    int num;
    cout<<" defina o numero que ira utilizar: ";
    cin>>num;

    while(num<0){
  
    cout<<" defina o numero que ira utilizar novamente: ";
    cin>>num;

    }

    TabuadaNumeros(num);

    return 0;
}