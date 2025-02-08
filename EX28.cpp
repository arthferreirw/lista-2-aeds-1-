#include <iostream>

using namespace std;

void CalcularMediaAlunosTurma(int alunos, int turmas, int valormedio){
    cout<<"---VALOR MEDIO---"<<endl;

    cout<<" informe a quantidade de alunos: ";
    cin>>alunos;

    cout<<" informe a quantidade de turmas: ";
    cin>>turmas;

    while(turmas>40){
    cout<<" informe a quantidade de turmas novamente (nao pode ser maior que 40): ";
    cin>>turmas;
    }

    valormedio=alunos/turmas;
    
    cout<<" o valor medio de alunos por turma eh: "<<valormedio;




}

int main (){
    int alunos=0;
    int turmas=0;
    int valormedio=0;
    CalcularMediaAlunosTurma( alunos,turmas,valormedio);





}