#include <iostream>

using namespace std;

void CardapioLanches(float preco, float codigo, float quantidade, float precofinal, float valoritem){
        for(int i=1; i<=5; i=i+1){
        cout<<" digite o codigo do produto: ";
        cin>>codigo;
        if(codigo==100){
            cout<<" CACHORRO-QUENTE "<<endl;
            cout<<" PRECO: R$ 1.20 "<<endl;
            cout<<"qual a quantidade desejada de cachorro quente? ";
            cin>>quantidade;
            valoritem=quantidade*1.20;
            cout<<" o valor a ser pago pelo cachorro-quente eh de: R$ "<<valoritem<<endl;
            precofinal++;
        }

        if(codigo==101){
            cout<<" Bauru Simples "<<endl;
            cout<<" PRECO: R$ 1,30 "<<endl;
            cout<<"qual a quantidade desejada de bauru simples? ";
            cin>>quantidade;
            valoritem=quantidade*1.30;
            cout<<" o valor a ser pago pelo bauru simpes eh de: R$ "<<valoritem<<endl;
            precofinal=valoritem+precofinal;

        }
        if(codigo==102){
            cout<<" Bauru com ovo "<<endl;
            cout<<" PRECO: R$ 1,50 "<<endl;
            cout<<"qual a quantidade desejada de bauru com ovo? ";
            cin>>quantidade;
            valoritem=quantidade*1.50;
            cout<<" o valor a ser pago pelo bauru com ovo eh de: R$ "<<valoritem<<endl;
           precofinal=valoritem+precofinal;
        }
        if(codigo==103){
            cout<<" Hambúrguer "<<endl;
            cout<<" PRECO: R$ 1,20 "<<endl;
            cout<<"qual a quantidade desejada de Hambúrguer ? ";
            cin>>quantidade;
            valoritem=quantidade*1.20;
            cout<<" o valor a ser pago pelo hamburguer eh de: R$ "<<valoritem<<endl;
            precofinal=valoritem+precofinal;

        }
        if(codigo==104){
            cout<<" Cheeseburguer "<<endl;
            cout<<" PRECO: R$ 1,20 "<<endl;
            cout<<"qual a quantidade desejada de Cheeseburguer ? ";
            cin>>quantidade;
            cout<<" o valor a ser pago pelo cheeseburguer eh de: R$ "<<valoritem<<endl;
            valoritem=quantidade*1.30;
            precofinal=valoritem+precofinal;

        }
        if(codigo==105){
            cout<<" Refrigerante "<<endl;
            cout<<" PRECO: R$ 1,00 "<<endl;
            cout<<"qual a quantidade desejada de Refrigerante ? ";
            cin>>quantidade;
            valoritem=quantidade*1.00;
            cout<<" o valor a ser pago pelo refrigerante eh de: "<<valoritem<<endl;
            precofinal=valoritem+precofinal;

        }
    } 
    cout<<" o preco final da compra: R$ "<<precofinal<<endl;
        
}
int main(){
    float preco=0;
    float codigo=0;
    float quantidade=0;
    float precofinal=0;
    float valoritem=0;
    CardapioLanches( preco, codigo,  quantidade,  precofinal,  valoritem);



    return 0;
}

    





