#include <iostream>

using namespace std;

void VendinhaDoSeuZe(float produto, float preco, float dinheiro, float troco, float total){
    cout<<"-----VENDINHA DO SEU ZE-----"<<endl;
    cout<<"-----TABELA DE PRECOS-----"<<endl;
    
    cout<<" quantos produtos voce deseja comprar: ";
    cin>>produto;

    cout<<"-----PRODUTOS COMPRADOS-----"<<endl;

    for(int i=1; i<=produto; i=i+1){
    cout<<" qual eh o preco do produto? ";
    cin>>preco;
    
    total=preco+total;
  

    cout<<" Produto " <<i<<" R$ "<<preco<<endl;

    cout<<"--------"<<endl;
    cout<<"Total: "<<" R$ "<<total<<endl;
    cout<<"--------"<<endl;

    cout<<" quanto de dinheiro voce tem? ";
    cin>>dinheiro;

    cout<<" Dinheiro: "<<"R$"<<dinheiro<<endl;

    troco=dinheiro-total;
    cout<<"Troco: "<<"R$"<<troco<<endl;

    if(preco==0){
    cout<<" Produto  "<<i<<":"<<" R$ "<<" 0.0 "<<endl;

    }else{



    }
   



    }

        


    }
int main(){

float produto=0;
float preco=0;
float dinheiro=0;
float troco=0;
float total=0;
 VendinhaDoSeuZe( produto,  preco,  dinheiro,  troco,  total);




    return 0;
}








