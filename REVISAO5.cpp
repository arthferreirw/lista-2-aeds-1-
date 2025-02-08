#include <iostream>
using namespace std;

void LojaDeConveniencias(){
float finalizar;
float produto1=0;
float produto2=0;
float produto3=0;
float produto4=0;
float produto5=0;
float total;
float dinheirocliente=0;
float troco;

        do{
            cout<<" informe o preco do produto 1: ";
            cin>>produto1;
            cout<<" informe o preco do produto 2: ";
            cin>>produto2;
            cout<<" informe o preco do produto 3: ";
            cin>>produto3;
            cout<<" informe o preco do produto 4: ";
            cin>>produto4;
            cout<<" informe o preco do produto 5: ";
            cin>>produto5;
            cout<<" informe 0 para finalizar a compra: ";
            cin>>finalizar;
            
        }while(finalizar!=0);
total=produto1+produto2+produto3+produto4+produto5;
cout<<" quanto de dinheiro o cliente possui: ";
cin>>dinheirocliente;
troco=dinheirocliente-total;

cout<<"--- PRODUTOS COMPRADOS---"<<endl;
cout<<" Produto 1: R$ "<<produto1<<endl;
cout<<" Produto 2: R$ "<<produto2<<endl;
cout<<" Produto 3: R$ "<<produto3<<endl;
cout<<" Produto 4: R$ "<<produto4<<endl;
cout<<" Produto 5: R$ "<<produto5<<endl;

cout<<"---------------------------"<<endl; 
cout<<" Total: R$ "<<total<<endl;
cout<<"---------------------------"<<endl; 


cout<<" Dinheiro: R$ "<<dinheirocliente<<endl;
cout<<" Troco: R$ "<<troco<<endl;




}
int main(){

    LojaDeConveniencias();





    return 0;
}