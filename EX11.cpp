#include <iostream>

using namespace std;

void VerificarIdade(int idade){

    idade=0;
    cout<<" informe a sua idade(0-150): ";
    cin>>idade;
    
    while(idade<0){
    cout<<" informe a sua idade novamente: ";
    cin>>idade;
    }


    while (idade>150){
    cout<<" informe a sua idade novamente: ";
    cin>>idade;
    }



}
void VerificarSalario(int salario){
    salario=0;
    cout<<" informe o salario: ";
    cin>>salario;

    while(salario<0){
    cout<<" informe o salario novamente: ";
    cin>>salario;




    }




}
void VerificarCivil(char civil){

    cout<<" informe o seu estado civil (s,c,v,d): ";
    cin>>civil;

   if(civil!='s' && civil!='c' && civil!='v'&& civil!='d'){
    cout<<" informe o seu estado civil novamente (s,c,v,d): ";
    cin>>civil;

   }else{


    
   }
   


    }


int main(){

    int idade;
    idade=0;
    VerificarIdade(idade);

    int salario;
    salario=0;
    VerificarSalario(salario);

    char civil;
    VerificarCivil(civil);







    return 0;
}