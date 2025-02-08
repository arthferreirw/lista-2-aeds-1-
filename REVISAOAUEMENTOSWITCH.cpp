#include <iostream>
using namespace std;

void AumentoSalarialCargos(){
    float  salario=0;
    float NovoSalario=0;
    int    Codigo=0;
    float DiferencaSalarial=0;
    DiferencaSalarial=NovoSalario-salario;
    cout<<" qual eh o codigo do seu cargo? ";
    cin>>Codigo;
    cout<<" informe o seu salario: ";
    cin>>salario;

    switch (Codigo) {
        case 101: 
        //gerente
        cout<<" GERENTE "<<endl;
        NovoSalario=(salario*1.1);
        DiferencaSalarial=NovoSalario-salario;
        cout<<" o seu novo salario como gerente eh: R$ "<<NovoSalario<<endl;
        cout<<" a diferenca entre o novo salario e o antigo eh: R$ "<<DiferencaSalarial<<endl;
        break;

        case 102:
        //engenheiro 
        cout<<" ENGENHEIRO "<<endl;
        NovoSalario=(salario*1.2);
        DiferencaSalarial=NovoSalario-salario;
        cout<<" o seu novo salario como engenheiro eh: R$ "<<NovoSalario<<endl;
        cout<<" a diferenca entre o novo salario e o antigo eh: R$ "<<DiferencaSalarial<<endl;
        break;

        case 103:
        //técnico 
        cout<<" TECNICO "<<endl;
        NovoSalario=(salario*1.3);
        DiferencaSalarial=NovoSalario-salario;
        cout<<" o seu novo salario como tecnico eh: R$ "<<NovoSalario<<endl;
        cout<<" a diferenca entre o novo salario e o antigo eh: R$ "<<DiferencaSalarial<<endl;
        break;

        default: 
        //cargo não identificado
        cout<<" CARGO NAO IDENTIFICADO "<<endl;
        NovoSalario=(salario*1.4);
        DiferencaSalarial=NovoSalario-salario;
        cout<<" o seu novo salario eh: R$ "<<NovoSalario<<endl;
        cout<<" a diferenca entre o novo salario e o antigo eh: R$ "<<DiferencaSalarial<<endl;
        break;
  
    }

}
int main (){

    AumentoSalarialCargos();






    return 0;
}