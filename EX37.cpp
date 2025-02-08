#include <iostream>

using namespace std;

void InformadorPesoAlturaCliente(int cliente, int codigo, int peso, int altura, int alto, int baixo, int gordo, int magro){
cout<<"------ACADEMIA------"<<endl;
cout<<" quantos clientes? ";
cin>>cliente;
cout<<"digite o codigo 0 para continuar: ";
cin>>codigo;

if(codigo==0){
    for(int i=0; i<=cliente; i=i+1){
    cout<<" informe a sua altura: ";
    cin>>altura;
    cout<<" informe o seu peso: ";
    cin>>peso;
    if(altura>alto){
    alto=altura;

}    if(altura<baixo){
    baixo=altura;


}
    if(peso>gordo){
    gordo=peso;

    
}  if(peso<magro){
    magro=peso;

    }
    
}
    cout<<" o cliente com menor peso eh: "<<magro<<endl;
    cout<<" o cliente com maior peso eh: "<<gordo<<endl;
    cout<<" o cliente com maior altura eh: "<<alto<<endl;
    cout<<" o cliente com a menor altura eh: "<<baixo<<endl;  
   
   

}else {
    cout<<" digite codigo 0"<<endl;
}
   
   


}
int main(){
    int cliente=0;
    int codigo=0;
    int peso=0;
    int altura=0;
    int alto=0;
    int baixo=999;
    int gordo=0;
    int magro=999;
    InformadorPesoAlturaCliente( cliente, codigo,  peso,  altura,  alto,  baixo,  gordo, magro);






    return 0;
}