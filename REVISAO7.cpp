#include <iostream>

using namespace std;

void DadosSobreAlturaPesoCodigo(){
    int altura=0.0;
    int mais_alto=0.0;
    int mais_baixo=999;
    int peso=0;
    int mais_gordo=0.0;
    int mais_magro=999;
    int codigo;
    float mediapeso=0.0;
    float mediaaltura=0.0;
    int clientes=0.0;
    int codigo1=0.0;
    int codigo2=0.0;
    int codigo3=0.0;
    int codigo4=0.0;
    cout<<"----- TABELA DE VERIFICAÇÃO -----"<<endl;
    cout<<" informe 0 no codigo para finalizar "<<endl;
    do{
        cout<<" informe a sua altura (cm): ";
        cin>>altura;
        cout<<" informe o seu peso (kg): ";
        cin>>peso;
        cout<<" informe o seu codigo: ";
        cin>>codigo;
        
        clientes++;
        if(altura>mais_alto){
            mais_alto=altura;
            codigo1=codigo;
        }
        if(altura<mais_baixo){
            mais_baixo=altura;
            codigo2=codigo;
        }
        if(peso>mais_gordo){
            mais_gordo=peso;
            codigo3=codigo;
        } 
        if(peso<mais_magro){
            mais_magro=peso;
            codigo4=codigo;
        }

    }while(codigo>0);
        
    
    cout<<" o cliente mais gordo pesa (kg): "<<mais_gordo<<endl;
    cout<<" o codigo do cliente mais gordo: "<<codigo3<<endl;
    cout<<" o cliente mais magro pesa (kg): "<<mais_magro<<endl;
    cout<<" o codigo do cliente mais magro: "<<codigo4<<endl;
    cout<<" o cliente mais alto possui (cm): "<<mais_alto<<endl;
    cout<<" o codigo do cliente mais alto: "<<codigo1<<endl;
    cout<<" o cliente mais baixo possui (cm): "<<mais_baixo<<endl;
    cout<<" o codigo do cliente mais baixo: "<<codigo2<<endl;
    cout<<" o total de clientes que participaram dessa verificacao eh: "<<clientes<<endl;
    mediapeso=mais_gordo+mais_magro/clientes;
    mediaaltura=mais_alto+mais_baixo/clientes;
    cout<<" a media das alturas eh: "<<mediaaltura<<endl;
    cout<<" a media dos pesos eh: "<<mediapeso<<endl;
        
}


int main(){
    DadosSobreAlturaPesoCodigo();







    return 0;
}
