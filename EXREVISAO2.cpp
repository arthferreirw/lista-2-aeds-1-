#include <iostream>
using namespace std;

void GeradorTabuada(int numero){
  
    int produto=0;
    cout<<" tabuada do "<<numero<<endl;
    for(int i=1; i<=10; i=i+1){
        produto=numero*i;
        cout<<numero<<" X "<<i<<" = "<<produto<<endl;
    }


}
int main(){
    int numero;
    
    do{
        cout<<" informe o numero que voce deseja ver a tabuada (1-10): ";
        cin>>numero;
        if(numero<0){
        cout<<" numero invalido, informe um outro numero novamente: ";
        cin>>numero;    
        }

    }while(numero<0);

    GeradorTabuada(numero);



    return 0;
}