#include <iostream>
#include <string>
using namespace std;


void NomeSenhaDeUsuario(string nome, string senha){
    
    cout<<" informe o nome de usuario:  ";
    cin>>nome;

    cout<<" informe senha de usuario: ";
    cin>>senha;
    
   

    while(nome==senha){
    cout<<" informe o nome de usuario novamente:  ";
    cin>>nome;

    cout<<" informe senha de usuario novamente: ";
    cin>>senha;


    }

    cout<<"---BEM VINDO---"<<endl;
    cout<<"---"<<nome<<"---"<<endl;


}
int main(){

    string nome;
    string senha;
    NomeSenhaDeUsuario(nome,senha);






    return 0;
}