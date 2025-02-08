#include <iostream>
using namespace std;
void SalarioFuncionario(float novosalario,float salario, float ano, float percentual){

    cout<<" digite o salario: ";
    cin>>salario;

    novosalario=salario+(salario*percentual);

    while(ano<=2000){
    percentual=2*percentual;
    novosalario=novosalario+(novosalario*percentual);
    ano=ano+1;
    }

    cout<<"o salario atual eh: "<<novosalario<<endl;
    
}
int main(){


float novosalario=0;
float salario=0;
float ano=1997;
float percentual=1.5/100;
SalarioFuncionario( novosalario, salario,  ano, percentual);




    return 0;
}