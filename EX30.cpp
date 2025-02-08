#include <iostream>

using namespace std;

void TabelaDePrecos(float valorfinal, float quantidade, float preco){
    cout<<"------------------------------------------------------------"<<endl;
    cout<< " PANIFICADORA PAO DURO- Tabela de precos  "<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    

    cout<<" quantos produtos voce deseja comprar? ";
    cin>>quantidade;

    cout<<" qual eh o valor do pao que voce deseja comprar? ";
    cin>>preco;

    if(quantidade>50){
    cout<<" temos somente 50 produtos no nosso estoque "<<endl;       

    }else{


    }

    for(int i=1; i<=quantidade; i=i+1 ){
        valorfinal=quantidade*preco;

    }
    cout<<quantidade<<" - "<<" R$ "<<valorfinal<<endl;


}
int main(){

float valorfinal=0;
float quantidade=0;
float preco=0;
TabelaDePrecos( valorfinal,quantidade, preco);





    return 0;
}