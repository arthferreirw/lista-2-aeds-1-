#include <iostream>
using namespace std;
void SalarioNovo(){
    float salarioantigo=0.0;
    cout<<" digite o seu salario antigo: ";
    cin>>salarioantigo;
    float novosalario=0.0;
    float porcentagem=0.0;
    for(int ano=1995; ano<=2024; ano=ano+1){
        novosalario=(salarioantigo*porcentagem)+salarioantigo;
        porcentagem+=0.015;
    }
    cout<<" o salario do funcionario teve um aumento em 2024 de: R$ "<<novosalario<<endl;




}
int main (){
       
    SalarioNovo();
        







    return 0;
}