//Faça um programa que calcule o número médio de alunos por turma. Para	isto, peça a quantidade de turmas e a quantidade de alunos para	cada turma. As turmas não podem ter mais de 40 alunos.//
#include <iostream>
using namespace std;
void CalcularNumeroMedioAlunosTurma(){
    int turmas=0;
    int alunos=0;
    int media;
    do{
        cout<<" informe a quantidade de alunos: ";
        cin>>alunos;
            if(alunos>40){
            cout<<" informe a quantidade de alunos novamente: ";
            cin>>alunos;

        }


    }while(alunos>0 && alunos<40);
    cout<<" informe a quantidade de turmas: ";
    cin>>turmas;
    media=alunos/turmas;
    cout<<" a quantidade de alunos por turma eh: "<<media<<endl;
}
int main(){
    CalcularNumeroMedioAlunosTurma();




    return 0;
}