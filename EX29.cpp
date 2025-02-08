#include <iostream>

using namespace std;

void ValorTotalInvestido(int quantidadecd, int valorcd, int valormedio, int totalinvestido, int somacd){
    cout<<" informe a quantiade de cd's: ";
    cin>>quantidadecd;

    for(int i=1; i<=quantidadecd; i=i+1){

        cout<<" informe o valor de cada cd: ";
        cin>>valorcd;

        totalinvestido=valorcd*quantidadecd;

        somacd=somacd+valorcd;
        valormedio=valorcd/quantidadecd;
        
        
        

        
    }
    
    cout<<" o valor total investido eh: "<<totalinvestido<<endl;


    
    cout<<" o valor medio gasto em cada um deles eh:  "<<valormedio<<endl;

    




}
int main (){
    int quantidadecd=0;
    int valorcd=0;
    int valormedio=0;
    int totalinvestido=0;
    int somacd=0;
    

    ValorTotalInvestido( quantidadecd, valorcd,  valormedio,  totalinvestido,somacd);






    return 0;
}
